#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct {
	Data nascimento;
	char nome[50];
	char sexo;
} Pessoa;

void imprimirPessoa(Pessoa p) {
	printf("\nNome -> %s", p.nome);
	printf("Sexo -> %c\n", p.sexo);
	printf("Nascimento -> %.2d/%.2d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
	
}

int main(void) {
	Pessoa eu;
	
	printf("Digite seu nome -> ");
	fgets(eu.nome, 50, stdin);
	
	printf("Digite seu sexo[M/F] -> ");
	scanf("%c", &eu.sexo);
	
	printf("Digite sua data de nascimento -> ");
	scanf("%d%d%d", &eu.nascimento.dia, &eu.nascimento.mes, &eu.nascimento.ano);
	
	imprimirPessoa(eu);
	
}