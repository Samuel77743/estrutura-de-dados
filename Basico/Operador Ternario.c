#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	
	char resposta;
	
	printf("Spider-Man(2018) é melhor jogo do cabeça de teia até então?[S\\N]\nSUA RESPOSTA -> ");
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	
	/*Operadores ternários avaliam um critério e executam antes dos ':' se verdadeiro ou após
	ele se falso*/
	(resposta == 'S') ? printf("\nCorreto!\n") : printf("E R R A D O\n");
	
	system("pause");
	
}