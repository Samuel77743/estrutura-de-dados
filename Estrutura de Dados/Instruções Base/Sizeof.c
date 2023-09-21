//Tamanhos em bytes dos tipos:

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia;
	int mes;
	int ano;
}Data;

typedef struct pessoa {
	int idade;
	char nome[50];
	Data nasc;
	struct pessoa *pont;
}Pessoa;

int main(void) {
	
	printf("Primitivos:\n");
	printf("INT -> %d", sizeof(int));
	printf("\nFLOAT -> %d", sizeof(float));
	printf("\nDOUBLE -> %d", sizeof(double));
	printf("\nCHAR -> %d", sizeof(char));
	
	printf("\n\nSTRUCTs:\n");
	printf("struct Pessoa -> %d", sizeof(Pessoa));
}