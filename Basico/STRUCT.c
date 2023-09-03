#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	//Criando "classe"
	struct contaBancaria {
		int conta;
		//char nome[30];
		float saldo;
	};
	
	//Instanciando uma variavel do tipo contaBancaria
	struct contaBancaria pessoa1;
	
	//Adicionando valor aos atributos de pessoa1
	pessoa1.conta = 1001;
	//pessoa1.nome = 's';
	pessoa1.saldo = 1200.48;
	
	//Exibindo dados de pessoa1
	printf("PESSOA 1:");
	printf("\nCONTA.......#%d", pessoa1.conta);
	//printf("\nNOME........%s", pessoa1.nome);
	printf("\nSALDO.......R$%.2f", pessoa1.saldo);
}