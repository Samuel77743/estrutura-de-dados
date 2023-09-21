#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
		
	int vetor[] = {13, 2, 4, 0, 2, 1, 15,12, 30};
	
	//Endereço de um array é sempre o endereço do primeiro índice
	printf("Endereço de início do array: %p \t %p", vetor, &vetor[0]);
	
	//o endereço ao ser somado com 1 por exemplo passa a referenciar o proximo endereço
	//Com isso é possível exbir todos índices referenciando seus endereços
	printf("\n\nVALORES DE CADA ÍNDICE:\n");
	int i, tam = sizeof(vetor) / sizeof(vetor[0]);
	
	for(i = 0; i < tam; i++) {
		printf("vetor[%d] -> %d\n", i, *(vetor+i)); //Aritmética de ponteiros
	}
}