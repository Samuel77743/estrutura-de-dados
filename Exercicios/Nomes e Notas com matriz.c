#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[3][30]; //30 para capacidade de nome
	float nota[3];
	
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Digite o Nome / Nota do %dº aluno -> ", i+1);
		scanf("%s %f", &nome[i], &nota[i]);
		fflush(stdin);
	}
	
	printf("\tALUNO\t\tNOTA\n");
	for(i = 0; i < 3; i++) {
		printf("\t%s\t\t%.2f\n",nome[i], nota[i]);
	}
	
	system("pause");
	
}