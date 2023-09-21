#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[30];
} Pessoa;

typedef struct No{
	Pessoa pessoa;
	struct No *proximo;
} No;

int isEmpty(No *lista) {
	return (lista == NULL);	
}

Pessoa lerNome() {
	Pessoa p;
	
	printf("\nPreencha o nome -> ");
	fgets(p.nome, sizeof(p.nome), stdin);
	fflush(stdin);
	
	int len = strlen(p.nome);
	if (len > 0 && p.nome[len - 1] == '\n') {
        p.nome[len - 1] = '\0';
    }
	return p;
}

void inserirInicio(No **lista) {
	No *novo = (No*)(malloc(sizeof(No)));
	
	if(novo) {
		novo->pessoa = lerNome();
		novo->proximo = *lista;
		*lista = novo;
	}
	else
		printf("\nNão foi possível alocar");
}

int listaPossui(No *lista, char* nome) {
	No *aux = (No*)(malloc(sizeof(No)));
	aux = lista;
	int i;
	while(i != 0){
		i = strcmp(aux->pessoa.nome, nome);
		aux = aux->proximo;		
	}
	if(i == 0)
		return 1;
	else 
		return 0;
}

void inserirFinal(No **lista) {
	No *novo, *aux = (No*)(malloc(sizeof(No)));
	if(novo) {
		novo->pessoa = lerNome();
		if(*lista)
			novo->proximo = *lista;
		else {
			aux = *lista;
			while(aux->proximo != NULL)
				aux = aux->proximo;
			novo->proximo = aux->proximo;
		}
		*lista = novo;
	}
	else
		printf("Memória não pode ser alocada");
}

void inserirMeio(No **lista) {
	No *novo, *aux = (No*)(malloc(sizeof(No)));
	
	if(novo) {
		novo->pessoa = lerNome();
		
		if(*lista != NULL){ //Se a lista for nula...
			novo->proximo = NULL;
			*lista = novo;
		}
		else {
			char comp[30];
			printf("É para inserir depois de qual nome?\nSUA RESPOSTA -> ");
			fgets(comp, sizeof(novo->pessoa), stdin);
			
			if(listaPossui(lista, comp)) {
				aux = *lista;
				while(aux->pessoa.nome != comp && aux->proximo != NULL)
					aux = aux->proximo;
				novo->proximo = aux->proximo;
				aux->proximo = novo;	
			}
		}
	}
	else
		printf("\nNão foi possível alocar memória\n");
}

void imprimirLista(No *lista) {
	int i = 1;
	
	printf("\n ====== IMPRESSÃO ======\n");
	if(!(isEmpty(lista))){
		
		while(lista) {
			printf("%dº............%s\n", i, lista->pessoa.nome);
			i++;
			lista = lista->proximo;
		}
		printf("\n\n");
	}
	else
		printf("\nLista vazia\n");
}
int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	No *lista;
	
	int opcao;
	do {
		printf("=== MENU ===\n");
		printf("[1] Inserir no início\n[2] Inserir no final\n[3] Inserir depois de um valor específico\n[4] Imprimir lista\n[0] Sair\n\n");
		printf("SUA RESPOSTA -> ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			case 1:
				if(&lista)
					inserirInicio(&lista);
				printf("\nItem adicionado com sucesso!\n");
				system("pause");
				system("cls");
				break;
			case 2:
				inserirFinal(&lista);
				system("pause");
				system("cls");
				break;
			case 3:
				inserirMeio(&lista);
				system("pause");
				system("cls");
				break;
			case 4:
				if(isEmpty(&lista))
					imprimirLista(&lista);
				else
					printf("\nPilha vazia\n");
				system("pause");
				system("cls");
				break;
			case 0:
				exit(1);
				printf("\nResposta inválida, digite novamente\n");
				system("pause");
				system("cls");
				break;
			default:
				printf("\nResposta Inválida\n");
				break;
		}
	}while(opcao != 0);
	return 0;	
}