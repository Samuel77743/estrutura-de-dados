#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char resposta;
	int contador = 0;
	float notas[10];
	
	printf("Digite as notas entre 1-10 do aluno:\n");
	
	do {

		if(contador > 9) {
			printf("Número de notas excedidos, cálculo terminado\n");
			break;
		}
		
		printf("Nota da %dº prova --> ", contador+1);
		scanf("%f", &notas[contador]);
		fflush(stdin);
		
		if(notas[contador] > 10 || notas[contador] < 0) {
			printf("\nAPENAS ENTRE 1 - 10\n");
			continue;
		}
		
		contador++;
		
		system("COLOR 2");
		printf("\nDESEJA CONTINUAR [S/N] --> ");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		fflush(stdin);
		
		system("COLOR 0");
	
	} while(resposta == 'S');
	
	int i, acumulador = 0;
	for(i = 0; i <= contador; i++) {
		acumulador += notas[i];
	}
	
	float media;
	media = (float)acumulador/contador;
	
	printf("\nMédia --> %.2f\n", media);
	
	if(media <= 4) {
		printf("SITUAÇÃO: REPROVADO");
	}
	
	else if(media <= 6) {
		printf("SITUAÇÃO: RECUPERAÇÃO");
	}
	else {
		printf("SITUAÇÃO: APROVADO");
	}
}

