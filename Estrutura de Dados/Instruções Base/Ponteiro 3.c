#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int array[] = {3, 5, 0, 1, 9, 2 };
	
	int tam = sizeof(array) / sizeof(array[0]);
	imprimirArray(array, tam);
}

void imprimirArray(int *vetor, int tamanho) {
	
	int i;
	
	for(i = 0; i < tamanho; i++) {
		printf("seuArray[%d] -> %d\n", i, *(vetor+i));
	}
}