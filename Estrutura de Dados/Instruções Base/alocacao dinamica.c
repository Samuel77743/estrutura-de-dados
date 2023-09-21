#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {
	setlocale(0, "Portuguese");
	
	int tam, *array;
	printf("Qual o tamanho do array a ser criado -> ");
	scanf("%d", &tam);
	
	srand(time(NULL));
	//ALOCANDO
	array = malloc(sizeof(int) * tam);
	
	if(array) {
		int i;
		for(i = 0; i < tam; i++) {
			*(array + i) = rand() % 101;
		}
		
		for(i = 0; i < tam; i++) {
			printf("%d ", *(array + i));	
		}
	}
	else {
		printf("Não alocado\n");
	}
}