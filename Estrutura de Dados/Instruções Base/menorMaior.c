#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int tam = 10, menor, maior;
	int vetor[tam];
	
	preencherArray(vetor, tam);
	imprimirArray(vetor, tam);
	
	menorMaior(vetor, &menor, &maior, tam);
	printf("\nMENOR -> %d\nMAIOR -> %d", menor, maior);
	
	return 0;
}

void preencherArray(int *vet, int tam) {
	int i;
	for(i=0; i < tam; i++) {
		*(vet+i) = rand() % 51;
	}
}

void imprimirArray(int *vet, int tam) {
	int i;
	for(i=0; i < tam; i++) {
		printf("%d ", *(vet + i));
	}
	printf("\n");
}

void menorMaior(int *vet, int *menor, int *maior, int tam) {
	*maior = *vet;
	*menor = *vet;
	
	int i;
	for(i = 1; i < tam; i++) {
		if(*(vet+i) > *maior)
			*maior = *(vet + i);
		if(*(vet + i) < *menor) {
			*menor = *(vet + i);
		}
	}
}