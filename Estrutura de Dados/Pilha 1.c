#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valor;
	int valor2;
}Node;

int main(void){
	
	Node meuNo;
	printf("%p\n%p", &meuNo.valor, &meuNo.valor2);
	
	
}