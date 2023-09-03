#include <stdio.h>
#include <locale.h>

int main (void){
	
    char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int tamLetras = sizeof(letras) / sizeof(letras[0]);
    
    int num[] = {13, 2, 9, 10, 67, 91};
    int tamNum = sizeof(num) / sizeof(num[0]);
    
    imprimirLetras(letras, tamLetras);
    printf("==================\n");
    imprimirNumeros(num, tamNum);
}

void imprimirNumeros(int *array, int tam) {
	int i;
	for(i = 0; i < tam; i++){
		printf("seuArray[%d] -> %d\n", i, *(array+i));
	} 
}

void imprimirLetras(char *array, int tam) {
	int i;
	for(i = 0; i < tam; i++){
		printf("seuArray[%d] -> %c\n", i, *(array+i));
	} 
} 