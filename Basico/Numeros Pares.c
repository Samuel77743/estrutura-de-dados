#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Números pares de 0 a 100:\n");
	
	int i, organizador = 1; //Organizador apenas deixará alinhado a vizualização
	for(i = 0; i <= 100; i++) {
		
		if(i % 2 == 0) { //"Se o resto da divisão entre 'i' e '2' for 0 então...
		
			if(organizador >= 20) { //Se já foi printado 20 números pule a linha(pra organizar)
				printf("%.2d\n", i);
				organizador = 1;
			}
			else { //Se não, apenas dê um espaço simples
			printf("%.2d ", i);
			organizador++;
			}
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}