#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	int dia, mes, ano;
} Data;

typedef struct {
	char nome[50];
	int idade;
	Data nasc;
} Pessoa;

void imprimir(Pessoa p) {
	
	printf("\n\n=== IMPRESSÃO ===\n");
	printf("Nome -> %s", p.nome);
	printf("Idade -> %d\n", p.idade);
	printf("Data de nascimento -> %.2d/%.2d/%d", p.nasc.dia, p.nasc.mes, p.nasc.ano);
}

Pessoa preencher() {
	Pessoa p;
	
	printf("PREENCHA:\n");
	printf("Nome -> ");
	fgets(p.nome, 50, stdin);
	
	printf("Idade -> ");
	scanf("%d", &p.idade);
	
	printf("Data de Nascimento (DD MM AAAA) -> ");
	scanf("%d%d%d", &p.nasc.dia, &p.nasc.mes, &p.nasc.ano);
	
	return p;
}

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoa = preencher();
	imprimir(pessoa);
}