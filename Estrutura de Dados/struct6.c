#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
	
} Pessoa;

void imprimir(Pessoa p) {
	printf("\n=== IMPRESSÃO ===\n");
	
	printf("NOME....... %s", p.nome);
	printf("IDADE...... %d\n", p.idade);
}

Pessoa cadastrar() {
	Pessoa p;
	printf("\n=== CADASTRO ===\n");
	printf("Nome -> ");
	fgets(p.nome, 50, stdin);
	printf("Idade -> ");
	scanf("%d", &p.idade);
	scanf("%c");
	return p;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");	
	Pessoa pessoas[3];
	int tamanho = sizeof(pessoas) / sizeof(pessoas[0]);
	
	int i;

	for(i = 0; i < tamanho; i++) {
		pessoas[i] = cadastrar();	
	}
	for(i = 0; i < tamanho; i++) {
		imprimir(pessoas[i]);
	}
}