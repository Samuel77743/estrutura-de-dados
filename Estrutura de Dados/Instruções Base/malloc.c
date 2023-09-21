//usando MALLOC (Alocação de Memória)
//Retorna o primeiro ponteiro seguido de espaços alocaveis seguintes

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int *pont;
	
	pont = malloc(sizeof(int));
	
	if(pont) { //SE FOR DIFERENTE DE NULL
		printf("Alocado com sucesso no ponteiro -> %p", pont);
	}
	else {
		printf("Erro ao alocar memória");
	}
}