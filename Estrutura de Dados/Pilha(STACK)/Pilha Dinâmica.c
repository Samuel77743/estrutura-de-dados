#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia, mes, ano;
}Data;

typedef struct {
	char nome[30];
	Data data;
} Pessoa;

typedef struct No {
	Pessoa p;
	struct no *proximo;
} No;

Pessoa lerPessoa() {
	Pessoa p;
	printf("Digite o nome -> ");
	fgets(p.nome, 30, stdin);
	fflush(stdin);
	
	printf("Digite a data(dd mm aaaa) -> ");
	scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
	return p;
}

void imprimirPessoa(Pessoa p) {
	printf("\n=== IMPRESSÃO ===\n");
	printf("NOME....................%s", p.nome);	
	printf("Data de Nascimento......%.2d/%.2d/%.2d\n\n", p.data.dia, p.data.mes, p.data.ano);
}

No* empilhar(No *topo) {
	No *novo = (No*)malloc(sizeof(No));
	
	if(novo){
		novo->p = lerPessoa();
		novo->proximo = topo;
		return novo;
	}
	else
		printf("\nNão foi possível alocar memória!\n");
	return NULL;
}

int main() {
	No *topo = NULL;
	int opcao;
	
	do{
		printf("======== MENU ========\n");
		printf("[1] Push\n[2] Pop\n[3] Imprimir\n[4] Sair\n\n");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			case 1:
				topo = empilhar(topo);
				break;
			case 2:
				
				break;
			case 3:
				imprimirPessoa(topo->p);
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("\nResposta Inválida!\n");
				break;
		}
				
	}while(opcao != 0);
}