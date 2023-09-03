#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	int matriz[7][3];
	
	//Descobrindo: Número de posições totais, de linhas e de colunas.
	int total = sizeof(matriz) / sizeof(matriz[0][0]);
	int linhas = sizeof(matriz) / sizeof(matriz[0]);
	int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
	
	printf("Linhas -> %d\nColunas -> %d\nTOTAL -> %d", linhas, colunas, total);
	
}