#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int vet[40], i;
	int tam = sizeof(vet) / sizeof(vet[0]);
	
	//Gerando posições aleatórias:
	for(i = 0; i < 40; i++) {
		vet[i] = rand() % 101;
	}
	
	printf("==== VETORES DESORNDENADOS ====\n");
	imprimir(vet);
	
	//Ordenando
	int aux, acabou;
	
	do{
		acabou = 1;
		
		for(i = 0; i < 39; i++) {
			if(vet[i] > vet[i+1]) {
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				acabou = 0;
			}
		}
	}while(!acabou);
	
	printf("\n\n==== VETORES ORGANIZADOS ====\n");
	imprimir(vet);
}
	
void imprimir(int *vet) {
	int i, acum = 0;
	for(i = 0; i < 40; i++){
		printf("%3d ", *(vet +i));
		acum++;
		if(acum == 10){
			printf("\n");
			acum = 0;	
		}
	}
} 