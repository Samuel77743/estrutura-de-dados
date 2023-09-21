#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void) {
	setlocale(0, "Portuguese");
	
	srand(time(NULL));
	
	int tam, *vet;
	printf("Qual o tamanho do array a ser preenchido -> ");
	scanf("%d", &tam);
	
	vet = malloc(tam * sizeof(int));
	
	if(vet) {
		printf("\n==== Alocado com sucesso ====\n");
		int i;
		//Preenchendo
		for(i = 0; i < tam; i++)
			*(vet + i) = rand() % 101;
			
		//Printando
		for(i = 0; i < tam; i++)
			printf("%d ", *(vet + i));
			
		//Realocando
		printf("\n\nQual o novo tamanho do array -> ");
		scanf("%d", &tam);
		
		realloc(vet, tam);
		for(i = 0; i < tam; i++)
			printf("%d ", *(vet + i));
		
	}
	
	else {
		printf("Erro, não foi possível alocar dados");
	}
}