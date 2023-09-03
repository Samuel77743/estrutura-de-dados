#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis convencionais
	int num = 15;
	char letra = 'y';
	
	//Declarando ponteiros
	int *ponteiro_int = &num;
	char *ponteiro_char = &letra;
	
	//Possui mesmos endereços
	printf("ENDEREÇOS:\n");
	printf("num/ponteiro_int --> %p \t %p\n", &num, ponteiro_int);
	printf("letra/ponteiro_char --> %p \t %p\n\n", &letra, ponteiro_char);
	
	//Ponteiros relfetem mesmos valores
	printf("VALORES:\n");
	printf("num/ponteiro_int --> %d \t %d\n", num, *ponteiro_int);
	printf("letra/ponteiro_char --> %c \t %c\n\n", letra, *ponteiro_char);	
}