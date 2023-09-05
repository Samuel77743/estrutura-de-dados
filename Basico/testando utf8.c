#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	int dia, mes, ano;
} Data;

typedef struct {
	char nome[50];
	char sexo;
	
	Data nascimento; //Atributo do tipo struct Data
} Pessoa;

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoa;
	
	printf("Digite o nome -> ");
	fgets(pessoa.nome, 50, stdin);
	
	printf("Sexo('M' ou 'F') -> ");
	scanf("%c", &pessoa.sexo);
	
	printf("\nData de nascimento(no formato dd mm aaaa)\nRESPOSTA -> ");
	scanf("%d%d%d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
	
	printf("\n==== REGISTROS ====\n");
	printf("\nNOME -> %s", pessoa.nome);
	printf("\nSexo -> %c", pessoa.sexo);
	printf("\n\nData de Nascimento: %.2d/%.2d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
	
	
	
	
}