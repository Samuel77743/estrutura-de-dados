#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//	Declarando constantes(invariaveis)
	#define LINHAS 5
	#define COLUNAS 2 
	
int main(void) {
	
	char matriz[LINHAS][COLUNAS];
	//Preenchendo manualmente matriz
	printf("=== DIGITE OS VALORES ===\n");
	int i, j;
	for(i = 0; i < LINHAS; i++) {
		for(j = 0; j < COLUNAS; j++) {
			printf("matriz[%d][%d] -> ", i, j);
			scanf("%c", &matriz[i][j]);
			fflush(stdin);
		}
		printf("\n");
	}
	
	system("cls");
	printf("\n=== VALORES DIGITADOS ===\n");
	for(i = 0; i < LINHAS; i++) {
		for(j = 0; j < COLUNAS; j++) {
			printf("matriz[%d][%d] -> %c\n", i, j, matriz[i][j]);
		}
		printf("\n");
	}
	
	
}