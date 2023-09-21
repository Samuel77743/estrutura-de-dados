#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	int dia, mes, ano;
} Data;

typedef struct {
	char nome[30];
	Data data;
} Pessoa;

Pessoa lerPessoa() {
	Pessoa p;
	printf("\n=== CADASTRO ===\n");
	printf("NOME -> ");
	fgets(p.nome, 30, stdin);
	fflush(stdin);
	printf("DATA DE NASCIMENTO -> ");
	scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
	fflush(stdin);
	
	return p;
}

void imprimirPessoa(Pessoa p) {
	printf("\n=== IMPRESSÃO ===\n");
	printf("NOME...................%s", p.nome);
	printf("DATA DE NASCIMENTO.....%.2d/%.2d/%.4d\n", p.data.dia, p.data.mes, p.data.ano);
}

typedef struct No{
	Pessoa pessoa;
	struct no *proximo;
} No;

No* push(No *topo) {
	No* novo = (No*)(malloc(sizeof(No)));
	
	if(novo) {
		novo->pessoa = lerPessoa();
		novo->proximo = topo;
		return novo;
	}
	else {
		printf("\nErro, memória não alocada!\n");
		return topo;
	}
}

No* pop(No **topo) {
	No* removido = *topo;
	*topo = (*topo)->proximo;
	return removido;
}



int main() {
	setlocale(LC_ALL, "Portuguese");
	No *topo = NULL, *removido = NULL;
	
	int opcao;
	do{
		printf("\n=== MENU ===\n");
		printf("[1] PUSH\n[2] POP\n[3] Imprimir Topo\n\n[0] Sair\n");
		printf("\nSUA RESPOSTA -> ");
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
					printf("\nElemento que tinha nome -> %sREMOVIDO COM SUCESSO!\n", removido->pessoa.nome);
				}
				else
					printf("\nPilha já está vazia, nada a remover!\n");
				system("pause");
				system("cls");
				break;
			case 3:
				if(topo) {
					imprimirPessoa(topo->pessoa);
				} else
					printf("\nPilha vazia\n");
				system("pause");
				system("cls");
				break;
			case 0:
				exit(20);
			default:
				printf("\nResposta inválida\n");
				system("pause");
				system("cls");
				break;
		}
	}while(opcao != 0);
	
	return 0;	
}