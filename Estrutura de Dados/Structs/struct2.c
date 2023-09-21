#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
	char sexo;
} Pessoa;

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	Pessoa pessoa;
	
	printf("PREENCHA OS DADOS:\n\n");
	printf("Nome -> ");
	fgets(&pessoa.nome, 50, stdin);
		
	printf("\nIdade -> ");
	scanf("%d", &pessoa.idade);
	
	scanf("%c");
	
	printf("\nSexo(M ou F) -> ");
	scanf("%c", &pessoa.sexo);
}