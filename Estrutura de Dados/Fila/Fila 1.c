#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct No {
	int valor;
	struct No *proximo;
} No;

void inserirFila(No **fila, int num) {
	No* novo = (No*)malloc(sizeof(No));
	if(novo) {
		novo->valor = num;
		novo->proximo = NULL;
		
		if(*fila == NULL)
			*fila = novo;
		else{
			No *aux = *fila;
			while(aux->proximo != NULL) {
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
	}
	else
		printf("Não foi possível alocar memória!\n");
}

No* removerFila(No **fila) {
	
	if(*fila) {
		No *remover = *fila;
		*fila = (*fila)->proximo;
		return remover;
	}
	else
		printf("\nFila vazia, nada a remover\n");
		return NULL;
}

void imprimirFila(No *fila) {
	if(fila) {
		int ordinal = 1;
		printf("=== IMPRESSÃO ===\n");
		while(fila != NULL) {
			printf("%dº..........%d\n", ordinal, fila->valor);
			ordinal++;
			fila = fila->proximo;
		}
		printf("\n\n");
	}
	else
		printf("\nFila vazia\n\n");
}

void reset() {
	printf("\n");
	system("pause");
	system("cls");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	No* fila = NULL;
	No* removido = NULL;
	int resp, subresp;
	do {
		printf("==== MENU ====\n");
		printf("[1] Inserir\n");
		printf("[2] Remover\n");
		printf("[3] Imprimir\n\n");
		printf("[0] SAIR\n\n");
		
		printf("SUA RESPOSTA -> ");
		scanf("%d", &resp);
		
		switch(resp) {
			case 1:
				printf("\nNÚMERO QUE DESEJA INSERIR -> ");			
				scanf("%d", &subresp);
				inserirFila(&fila, subresp);
				reset();
				break;
			case 2:
				removerFila(&fila);
				reset();
				break;
			case 3:
				imprimirFila(fila);
				reset();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("Resposta inválida, tente novamente");
				reset();
				break;
		}		
	}while(resp != 0);
	
	
	
	
	return 0;
}