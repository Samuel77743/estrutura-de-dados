#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int qnt;
	
	printf("======= PREENCHENDO ARRAY INT =======\n");
	printf("Quantos valores deseja atribuir?\nRESPOSTA -> ");
	scanf(" %d", &qnt);
	int array[qnt];
	
	inserirArray(array, qnt);
	system("pause");
}

inserirArray(int *vetor, int tam) {
	int i;
	printf("\nDigite os valores:\n");
	for(i = 0; i < tam; i++) {
		printf("seuArray[%d] -> ", i);
		scanf(" %d", vetor+i);
	}
	system("cls");
	imprimirArray(vetor, tam);
	
}

void imprimirArray(int *vetor2, int tamanho2) {
	int i;
	printf("======= IMPRIMINDO ARRAY =======\n");
	for(i = 0; i < tamanho2; i++) {
		printf("seuArray[%d] -> %d\n", i, *(vetor2+i));
	}
}