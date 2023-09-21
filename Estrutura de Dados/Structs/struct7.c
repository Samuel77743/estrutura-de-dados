#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
} Pessoa;

void imprimir(Pessoa p) {
	printf("\n\n==== IMPRIMIR ====\n");
	printf("Nome -> %s", p.nome);	
	printf("Idade -> %d", p.idade);	
}

Pessoa cadastrar() {
	Pessoa p;
	
	printf("==== CADASTRAR ====\n");
	printf("NOME.......");
	fgets(p.nome, 50, stdin);	
	printf("IDADE......");
	scanf("%d", &p.idade);
	scanf("%c");
	
	return p;
}

int main(void) {
	Pessoa p[2][2];
	
	int i, j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			
			p[i][j] = cadastrar();		
		}
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			
			imprimir(p[i][j]);
		}
	}
}