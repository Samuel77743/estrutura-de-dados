#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese"); //Compatibilidade com padrões de digitação brasileira
		
//	Tipos de dados
	int num = 10;  //INTEIROS
	float valor = 44.99; //Com casas decimais
	double valor2 = 3.14642184148210412; //Com mais casas decimais
	char letra = 'c'; //Caracter
	char palavra[17] = "Boa Noite, bão?";
	
	
//	Printando todas variáeis atribuídas
	printf("Inteiro -> %d\nFloat -> %f\nDouble -> %.17f\nCacacter -> %c\nPalavra -> %s\n\n", num, valor, valor2, letra, palavra);
	system("pause");
	
	return 0;
}