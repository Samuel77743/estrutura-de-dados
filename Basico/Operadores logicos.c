#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\"Só terá acesso ao beneficio Mulheres com mais de 35 anos\"\n");
	
	int idade;
	char genero;
	
	printf("Qual sua idade -> ");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("Qual seu gênero?(responda com 'M' ou 'F') -> ");
	scanf("%c", &genero);
	fflush(stdin);
	
	if(idade > 35 && (genero == 'F' || genero == 'f')) {
		printf("\nEstá APTO ao benefício");
	}
	else {
		printf("Não está apto ao benefício");
	}
	
	system("pause");
	
	
}