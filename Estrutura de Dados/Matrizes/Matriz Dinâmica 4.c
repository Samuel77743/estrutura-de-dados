#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(0, "Portuguese");
	
	srand(time(NULL));
	int **mat, i, j;
	printf("%d", sizeof(int*));
	mat = malloc(sizeof(int*) * 4);
	
	for(i = 0; i < 4; i++) {
		mat[i] = malloc(sizeof(int) * 3);
	}
	
	preencherRamd(mat);
	return 0;
}

void preencherRamd(int **pont) {
	int lin = sizeof(pont) ;
	int col = sizeof(*pont) / sizeof(pont[0][0]);
	
	printf("Lin -> %d \t Col -> %d", lin, col);
}