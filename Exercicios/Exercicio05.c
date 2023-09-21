#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
//5) Implemente a função strcpy (char *destino, char *origem) usando ponteiros.

int strcpy(char *destino, char *origem) {
	int i = 0;
	while(*(origem + i) != '\0') {
		*(destino + i) = *(origem + i);
		
		i++;
	}
	*(destino + i) = '\0';
}

int main(void) {
	setlocale(0, "Portuguese");
	char origem[20] = "Samuel";
	char destino[20];
	
	printf("ANTES\n");
	printf("Origem -> %s\n", origem);
	printf("Destino -> %s", destino);
	
	strcpy(destino, origem);	

	printf("\n\nDEPOIS\n");
	printf("Origem -> %s\n", origem);
	
	printf("Destino -> %s", destino);
}