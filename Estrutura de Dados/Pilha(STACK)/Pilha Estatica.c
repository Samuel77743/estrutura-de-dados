//Pilha estática
#include <stdio.h>
#include <stdlib.h>

int indice = -1;
int tam;

int main() {
	
	tam = 8;
	
	int pilha[tam];
	
	push(pilha, 4);
	push(pilha, 8);
	push(pilha, 15);
	push(pilha, 16);
	push(pilha, 23);
	push(pilha, 42);
	
	imprimir(pilha);
	
	pop(pilha);
	pop(pilha);
	
	imprimir(pilha);
	
	push(pilha, 100);
	push(pilha, 125);
	
	imprimir(pilha);
	
	push(pilha, 10000);
	push(pilha, 10000);
	
	imprimir(pilha);
	
	pop(pilha);
	pop(pilha);
	pop(pilha);
	pop(pilha);
	pop(pilha);
	pop(pilha);
	pop(pilha);
	imprimir(pilha);
	
	//Removendo último elemento
	pop(pilha);
	
	//Removendo mais do que se tinha, acarretando em mensagem de "Já está vazia"
	pop(pilha);
	
	return 0;
}


void push(int *pilha, int valor) {
	
	printf("\nTentando adicionar %d em pilha[%d]...\n", valor, indice+1);
	if(isFull(pilha) == 1){
		printf("Já está cheia!");
		system("pause");
		system("cls");
	}
	printf("Sucesso!\n");
	indice++;
	pilha[indice] = valor;
	
}


void pop(int *pilha) {
	if(isEmpty(pilha) == 1) {
		printf("Pilha já está vazia");
		exit(1);
	}
	indice--;
}

int isEmpty(int *pilha) {
	return (indice-1 == -2);
}

int isFull(int *pilha) {
	if(indice == tam-1){
		return 1;
	} else{
		return 0;
	}
}

void imprimir(int *pilha) {
	printf("\n");
	int i;
	for(i=0; i <= indice; i++) {
		printf("suaPilha[%d] -> %d\n", i, pilha[i]);
	}
}