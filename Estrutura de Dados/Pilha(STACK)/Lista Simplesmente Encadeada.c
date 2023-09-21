#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

typedef struct No {
	int num;
	struct No *prox;
} No;

int isEmpty(No *lista) {
	return lista == NULL;
}

void inserirInicio(No **lista, int num) {
	No *novo = (No*)malloc(sizeof(No));
	
	if(novo) {
		novo->num = num;
		novo->prox = *lista;
		*lista = novo;
	}
	else
		printf("\nNão foi possível alocar memória\n");
}

void inserirFinal(No **lista, int num) {
	
	No *novo = (No*)(malloc(sizeof(No)));
	No *aux = (No*)(malloc(sizeof(No)));
	
	if(novo){
		novo->num = num;
		novo->prox = NULL;
		
		if(*lista == NULL){
			novo->prox = NULL;
			*lista = novo;
		}
		else {
			aux = *lista;
			while(aux->prox != NULL)
				aux->prox;
			aux->prox = novo;
		}
	}
	else
		printf("\nNão foi possível alocar memória\n");
} 	

void inserirMeio(No **lista, int num, int ant) {
	No *novo = (No*)(malloc(sizeof(No)));
	No *aux;
	
	if(novo) {
		novo->num = num;
		
		if(*lista == NULL){
			novo->prox = NULL;
			*lista = novo;
		}
		else {
			aux = *lista;
			while((aux->num != ant) && (aux->prox))
				aux = aux->prox;
			novo->prox = aux->prox;
			aux->prox = novo;	
			free(aux);		
		}
	}
	else
		printf("\nNão foi possível alocar memória!\n");
	
}

void imprimir(No *lista) {
	int i=0;
	printf("\n======= IMPRESSÃO =======\n");
	
	while(lista){
		printf("%dº ITEM............ %d\n", ++i, lista->num);
		lista = lista->prox;
	}
		printf("\n\n");
}

int pergunta() {
	int resp;
	printf("\n\nQual valor deseja adicionar\nSUA RESPOSTA -> ");
	scanf("%d", &resp);
	
	return resp;
}

int main() {
//	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	No *lista = NULL;
	
	int num, ant;
	do{
		printf("===== MENU =====\n");
		printf("[1] Inserir no Inicio\n[2] Inserir no Final\n[3] Inserir depois de um valor\n");
		printf("[4] Imprimir\n\n[0] SAIR\n\n");
		printf("SUA RESPOSTA -> ");
		
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			case 1:
				printf("\n\nQual valor deseja adicionar\nSUA RESPOSTA -> ");
				scanf("%d", &num);
				inserirInicio(&lista, num);
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\n\nQual valor deseja adicionar\nSUA RESPOSTA -> ");
				scanf("%d", &num);
				inserirFinal(&lista, num);
				
				system("pause");
				system("cls");
				break;
				
			case 3:
				
				printf("\nQual valor deseja adicionar\nSUA RESPOSTA -> ");
				scanf("%d", &num);
				
				printf("\nDeseja inserir após que número?\nSUA RESPOSTA -> ");
				scanf("%d", &ant);
				fflush(stdin);
				
				inserirMeio(&lista, num, ant);
				system("pause");
				system("cls");
				break;
			case 4:
				imprimir(lista);
				system("pause");
				system("cls");
				break;
			case 0:
				exit(1);
		}
	} while(opcao != 0);
	
	return 0;
}