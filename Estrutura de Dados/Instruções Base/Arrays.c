#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int array[] = {1, 2, 3, 4 ,5 ,6, 7, 8, 9, 10, 11, 12};
	
	int numPosicoes = sizeof(array) / sizeof(array[0]); // Obtendo 12
	
	int i = 0;
	
	//Printando todas posiçoes do array
	while(i < numPosicoes) {
		printf("array [%2d] -> %.2d\n", i, array[i]);
		i++;
	}
}