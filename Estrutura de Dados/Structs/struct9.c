#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia, mes, ano;
} Data;

void imprimir(Data *x) {
	printf("Dia -> %.2d\tMês -> %.2d\t Ano -> %d", x->dia, x->mes, x->ano);
}

int main (void) {
	Data data;
	data.dia = 16;
	data.mes = 8;
	data.ano = 2003;
	imprimir(&data);
}