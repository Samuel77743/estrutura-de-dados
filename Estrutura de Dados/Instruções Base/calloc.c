#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double *num;
	
	num = calloc(1, sizeof(double));
	if(num != NULL) {
		printf("Alocado com sucesso!\nANTES -> %f", *num);
		
		*num = 3.1447246178461412847;
		printf("\nDEPOIS -> %f", *num);
	}
	else {
		printf("Não alocado");
	}
}