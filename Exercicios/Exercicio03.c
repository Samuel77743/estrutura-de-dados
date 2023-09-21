#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3) Crie um programa que contenha um array de inteiros com 10 elementos.
//Imprima o elemento e o endereço de cada posição do array.

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int array[] = {2, 4, 8, 10, 9, 14, 90, 82, 1, 54};
	
	int i;
	for(i = 0; i < 10; i++) {
		printf("array[%d] -> %d\t%p\n", i, *(array+i), array+i);
	}
	
	system("pause");
}