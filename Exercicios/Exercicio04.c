#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4) Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo. */

int main(void) {
	setlocale(0, "Portuguese");
	
	int a, *b, **c, ***d;
	printf("Digite o valor para variavel A -> ");
	scanf("%d", &a);
	
	b = &a;
	printf("DOBRO -> %d\n", *b * 2);
	
	c = &b;
	printf("TRIPLO -> %d\n", (**c) * 3);
	
	d = &c;
	printf("QUADRUPLO -> %d\n", ***d * 4);
}