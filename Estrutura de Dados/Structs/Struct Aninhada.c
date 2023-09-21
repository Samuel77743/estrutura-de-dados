#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct endereco {
	char rua[20];
	int numero;
	char estado[3];
};

struct dataNascimento {
	int dia, mes, ano;
};

struct cadastro {
	char nome[30];
	char cpf[12];
	
	struct endereco endereco;
	struct dataNascimento dataNascimento;
};

void imprimir(struct cadastro *pessoas, int tam) {
	printf("\n\n========DADOS CADASTRADOS========\n");
	int i;
	for(i = 0; i < tam; i++) {	
		printf("%dº PESSOA:\n", i+1);
		
		printf("Nome -> %s", pessoas[i].nome);
		printf("CPF -> %s", pessoas[i].cpf);
		printf("Data de nascimento -> %.2d/%.2d/%.2d\n", pessoas[i].dataNascimento.dia, pessoas[i].dataNascimento.mes, pessoas[i].dataNascimento.ano);
		printf("Número -> %d\n", pessoas[i].endereco.numero);
		printf("Estado -> %s\n", pessoas[i].endereco.estado);
		
		printf("\n\n");
	}
}

int main() {
	setlocale(0, "Portuguese");
	
	struct cadastro pessoas[2];
	int i;
	
	for(i = 0; i < 2; i++) {
		
		printf("=== DADOS BASE ===\n");
		printf("Digite o NOME da %dº pessoa -> ", i+1);
		fgets(pessoas[i].nome, 30, stdin);
		fflush(stdin);
		printf("Digite o CPF da %dº pessoa -> ", i+1);
		fgets(pessoas[i].cpf, 12, stdin);
		fflush(stdin);
		
		printf("\n=== DATA DE NASCIMENTO ===\n");
		printf("Digite a data de nascimento da %dº pessoa no formato DD MM AAAA\nRESPOSTA -> ", i+1);
		scanf("%d %d %d", &pessoas[i].dataNascimento.dia, &pessoas[i].dataNascimento.mes, &pessoas[i].dataNascimento.ano);			
		fflush(stdin);
	
		printf("\n=== ENDEREÇO ===\n");
		printf("Digite a RUA da %dº pessoa -> ", i+1);
		
		fgets(pessoas[i].endereco.rua, 20, stdin);
		fflush(stdin);
		
		printf("Digite o número da %dº pessoa -> ", i+1);
		scanf("%d", &pessoas[i].endereco.numero);
		fflush(stdin);
		
		printf("\NDigite a ESTADO da %dº pessoa -> ", i+1);
		fgets(pessoas[i].endereco.estado, 3, stdin);
		fflush(stdin);
		printf("\n\n");
		
		system("cls");
	}
	imprimir(pessoas, 2);
	
	
	return 0;
}