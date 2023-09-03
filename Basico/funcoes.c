#include <stdio.h>
#include <stdlib.h>

float potencia(float base, float expoente) {
	float i, resultado = 1.0;
	
	if(expoente >= 0) {
		for(i = 1; i <= expoente; i++) {
			resultado =   resultado * base;
		}
	}
	
	else {
		for(i = 0; i > expoente; i--) {
			resultado = resultado / base;
		}
	}
	
	return resultado;
}

int main(void) {
	printf("%f", potencia(10, -2.0));
	
}