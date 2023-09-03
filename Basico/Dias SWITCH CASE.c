#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("Digite um número de um 1 - 7 para lhe ser retornado a qual dia corresponde:");
	printf("\nSUA RESPOSTA -> ");
	scanf("%d", &dia);
	fflush(stdin);
	
	while(dia < 1 || dia > 7) { 
		system("color 4");
		printf("Digite apenas números de 1 - 7");
		printf("\nSUA RESPOSTA -> ");
		scanf("%d", &dia);
		fflush(stdin);
	}
	
	system("color 7");
	
	switch(dia) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-Feira");
			break;
		case 3:
			printf("Terça-Feira");
			break;
		case 4:
			printf("Quarta-Feira");
			break;
		case 5:
			printf("Quinta-Feira");
			break;
		case 6:
			printf("Sexta-Feira");
			break;
		case 7:
			printf("Sábado");
			break;
		default:
			printf("Valor inesperado");
			break;
	}	
}