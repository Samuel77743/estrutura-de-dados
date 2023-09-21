#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Objetivo: alocar dinamicamente uma matriz 4x3
int main() {
	setlocale(0, "Portuguese");
	
	int **mat, i, j;
	
	//Alocando linhas
	mat = malloc(4 * sizeof(int*));
	
	//Alocando colunas
	for(i = 0; i < 4; i++) {
		mat[i] = malloc(sizeof(int) * 3);
	}
	
	printf("%d %d %d", (sizeof(mat) * sizeof(int) / sizeof(mat)), sizeof(**mat) * sizeof(int));
	// GERANDO VALORES PARA POSIÇÕES ALOCADAS
	srand(time(NULL));
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			mat[i][j] = rand() % 101;
		}
	}
	
	//Exibindo valores adicionados
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("mat[%d][%d] -> %d\n", i, j, mat[i][j]);
		}
		printf("\n");
	}		
	return 0;
}