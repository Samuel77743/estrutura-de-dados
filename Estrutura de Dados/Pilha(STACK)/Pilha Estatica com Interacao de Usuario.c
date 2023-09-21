//Pilha Estática com painel para usuário
#include <stdio.h>
#include <stdlib.h>

int tam, indice = -1;

void menu(int *pilha) {
	
	printf("\n\n====== EMPILHANDO ======\n");
	printf("[1] Empilhar(PUSH)\n");
	printf("[2] Retirar do topo(POP)\n");
	printf("[3] Imprimir estado atual da pilha");
	
	printf("\n[0] SAIR\n");
	
	int resposta;
	printf("\nSUA RESPOSTA -> ");
	scanf("%d", &resposta);
	fflush(stdin);
	
	switch(resposta) {
		case 1:
			if(isFull()) {
				printf("\n!!! Pilha já está CHEIA !!!\n");
				system("pause");
				system("cls");
				menu(pilha);
			}
			
			printf("Valor a ser inserido -> ");
			scanf("%d", &resposta);
			push(pilha, resposta);
			menu(pilha);
			break;
		case 2:
			pop(pilha);
			menu(pilha);
			break;
		case 3:
			imprimir(pilha);
			menu(pilha);
			break;
		case 0:
			exit(1);
			break;
		default:
			printf("Resposta Inválida, tente novamente.\n");
			system("pause");
			system("cls");
			menu(pilha);
			break;
	}
}

int isEmpty() {
	return (indice-1 == -2);
}

int isFull() {
	return (indice+1 == tam);	
}

void push(int *pilha, int valor) {
	indice++;
	pilha[indice] = valor;
}

void pop(int *pilha) {
	if(isEmpty(pilha)){
		printf("\n!!! Pilha já está VAZIA, não há o que remover !!!\n");
		system("pause");
		system("cls");
	} else{
		pilha[indice] = NULL;
		indice--;
	} 
}

void imprimir(int *pilha) {
	if(indice == -1){
		printf("\nNão há elementos para serem impressos!\n");
		system("pause");
		system("cls");
		menu(pilha);	
	}
	system("cls");
	printf("\n=== IMPRESSÃO ===\n");
	int i;
	for(i=0; i <= indice; i++) {
		printf("suaPilha[%d] -> %d\n", i, pilha[i]);
	}
}

int main() {
	
	printf("Qual será o tamanho da PILHA -> ");
	scanf("%d", &tam);
	fflush(stdin);
	
	int pilha[tam];
	menu(pilha);	
	
}

