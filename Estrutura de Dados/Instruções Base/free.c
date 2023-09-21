#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (void) {
	setlocale(0, "Portuguese");
	int *vet, tam;
	srand(time(NULL));
	
	printf("Qual tamanho do array a ser preenchido -> ");
	scanf("%d", &tam);
	fflush(stdin);
	
	vet = malloc(sizeof(int) * tam);
;
	
	if(vet) {
		
		ramdomVet(vet, tam, 100);
		
		imprimirVet(vet, tam);	

		printf("Digite o novo tamanho -> ");
		scanf("%d", &tam);
		fflush(stdin);
			
		vet = realloc(vet, tam);
		
		imprimirVet(vet, tam);
		
		free(vet);
	}
	else {
		printf("Erro, memória não alocada");
	}
	
	imprimirVet(vet, tam);	
}

void ramdomVet(int *vet, int tam, int ate) {
	int i;
	for(i = 0; i < tam; i++) {
		*(vet + i) = rand() % (ate+1);
	}
}

void imprimirVet(int *vetor, int tam) {
	printf("\nIMPRESSÃO:\n");
	int i;
	
	for(i = 0; i < tam; i++)
		printf("%d ", *(vetor + i));
		
	printf("\n\n");
}