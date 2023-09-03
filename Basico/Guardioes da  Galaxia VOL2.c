#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Biblioteca pra manipular CHAR(usei para forçar caixa alta)
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	system("COLOR 2"); //System executam comando do CMD, sendo o comando a string do parametro
	
	char resposta;
	
	printf("As antenas de Mantis servem para que caso uma porta tente decapitá-la ela consiga previnir?[S/N]\n");
	printf("Sua resposta -> ");
	
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	
	while(resposta != 'S' && resposta != 'N') {
		printf("\nResposta inválida, responda:\n");
		printf("As antenas de Mantis servem para que caso uma porta tente decapitá-la ela consiga previnir?[S/N]\n");
		printf("Sua resposta -> ");
		
		fflush(stdin); //Previni erro de scanf em não armazenar dados

		scanf("%c", &resposta);
		resposta = toupper(resposta);
	}
	
	if(resposta == 'S') {
		printf("\nDrax, o Destruidor ganhou a aposta!\n\n");
	}
	
	else {
		printf("\nPeter Quill ganhou a aposta!\n\n");
	}
	
	system("pause");
	return 0;
}