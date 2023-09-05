#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[50];
	int idade;
	char sexo;
	
}Pessoa;

int main(void) {
	
	Pessoa pessoa1;
	
	char nome[] = "Gilberto";
	strcpy(pessoa1.nome, nome);
	pessoa1.idade = 38;
	pessoa1.sexo = 'M';
	
	printf("%s\n", pessoa1.nome);
	printf("%d\n", pessoa1.idade);
	printf("%c\n", pessoa1.sexo);
	
}