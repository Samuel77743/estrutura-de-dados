#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	int dia, mes, ano;
} Data;

typedef struct{
	char nome[30];
	Data data;
} Pessoa;

Pessoa lerPessoa() {
	Pessoa p;
	printf("\n=== CADASTRO DE PESSOA ===\n");
	printf("NOME -> ");
	fgets(p.nome, 30, stdin);
	printf("DATA DE NASCIMENTO (DD MM AAAA) -> ");
	scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
	fflush(stdin);
	return p;
}

void imprimirPessoa(Pessoa p) {
	printf("\nNOME..................%s", p.nome);
	printf("DATA DE NASCIMENTO....%.2d/%.2d/%.4d\n", p.data.dia, p.data.mes, p.data.ano);
}

typedef struct No {
	Pessoa pessoa;
	struct No *proximo;
} No;

void imprimirPilha(No *topo) {
	printf("\n========= PILHA =========\n");
	int i = 0;
	while(topo) {
		printf("\n%.2dº", ++i);
		imprimirPessoa(topo->pessoa);
		
		topo = topo->proximo;
	}
	printf("\n======= FIM PILHA =======\n");

}

No* push(No *topo) {
	
	No *novo = (No*)(malloc(sizeof(No)));
	
	if(novo){
		novo->pessoa = lerPessoa();
		novo->proximo = topo;
		return novo;	
	}
	else{
		printf("\nNão foi possível alocar memória\n");
		return topo;
	}
}

No* pop(No **topo) {
	No *removido = *topo;
	*topo = (*topo)->proximo;
	return removido;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	No *topo = NULL, *removido = NULL;
	int opcao;
	
	do{
		printf("===== MENU =====\n");
		printf("[1] Push\n[2] Pop\n[3] Imprimir Pilha\n[4] Imprimir Topo\n\n[0] Sair\n\n");
		printf("SUA RESPOSTA -> ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			case 1:
				topo = push(topo);
				system("pause");
				system("cls");
				break;
			case 2:
				if(topo) {
					removido = pop(&topo);
					printf("\nElemento que tinha nome %sFoi removido com sucesso!\n", removido->pessoa.nome);
					system("pause");
					system("cls");
					break;
				}
				else
					printf("\nPilha vazia, nada a remover!\n");
				system("pause");
				system("cls");
				break;
			case 3:
				if(topo){
					imprimirPilha(topo);
				}
				else
					printf("\nPilha vazia, nada a imprimir\n");
				system("pause");
				system("cls");
				break;
			case 4:
				if(topo){
					printf("\n=== IMPRESSÃO DE PESSOA ===");
					imprimirPessoa(topo->pessoa);
				}
				else
					printf("\nPilha vazia, nada a imprimir\n");
				system("pause");
				system("cls");
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("\nResposta Inválida\n");
				system("pause");
				system("cls");
				break;
		}
	}while(opcao != 0);
	
	return 0;
}