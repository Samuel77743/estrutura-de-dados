#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int matriz[2][6];
	
	//Preenchendo matriz manualmente
	
	//sizeof(matriz) -> retorna a quantidade de bytes ocupada por todos índices < 6*2*4Bytes)
	//sizeof(matriz[0][0]) -> retorna quanto cada índice ocupa
	//sizeof(matriz[0]) -> retorna quantos bytes são ocupados no array posterior
	int total = sizeof(matriz) / sizeof(matriz[0][0]); 
	
	int linha = sizeof(matriz) / sizeof(matriz[0]);
	int coluna = sizeof(matriz[0]) / sizeof(matriz[0][0]);
		 
	printf("TOTAL DE POSIÇÕES: %d\nLINHAS:%d\nCOLUNAS:%d", total, linha, coluna);
	}