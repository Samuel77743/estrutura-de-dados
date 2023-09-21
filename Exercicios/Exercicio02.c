//2) Escreva um procedimento que troca os valores dos parâmetros recebidos.
//Sua assinatura deve ser: void troca(float *a, float *b);

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	float a = 10, b = 5;
	
	printf("Antes da troca:\nA-> %.2f\tB-> %.2f", a, b);
	trocar(&a, &b);
	printf("\n\Depois da troca:\nA-> %.2f\tB-> %.2f", a, b);

}

void trocar(float *a, float *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}