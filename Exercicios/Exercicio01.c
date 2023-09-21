#include <stdio.h>
#include <stdlib.h>

// 1) Escreva um procedimento que receba um vetor inteiro, seu tamanho e os 
// endereços de duas variáveis inteiras, menor e maior, salve nestas variáveis
// o menor e o maior valor do vetor.

int main(void) {
	int vet[] = {2, 4, 5, 0 , 1, 2, 5, 6, 2, 19, -2, 300};
	int tam = sizeof(vet) / sizeof(vet[0]);
	
	int menor, maior; 
	menorMaior(vet, tam, &menor, &maior);
	printf("Menor -> %d\t Maior -> %d", menor, maior);
	printf("\n\nDiferença entre maior e menor -> %d", maior-menor);
}

void menorMaior(int *vet, int tam, int *menor, int *maior) {
	
	*menor = *vet;
	*maior = *vet;
	
	int i;
	for(i = 0; i < tam; i++) {
		if(*(vet+i) < (*menor)) {
			*menor = *(vet+i);
		}
		
		if(*(vet+i) > (*maior)) {
			*maior = *(vet+i);
		}
	}
}