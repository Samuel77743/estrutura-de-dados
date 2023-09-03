#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um número --> ");
	scanf("%f", &num);
	
	printf("Metade do número: %.2f\nDobro do número: %.2f", num/2, num*2);
}