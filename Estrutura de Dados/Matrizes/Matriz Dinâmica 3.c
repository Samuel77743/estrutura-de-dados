#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(0, "Portuguese");
	srand(time(NULL));
	
	int **mat, i, j;
	
	mat = malloc(sizeof(int*) * 4);
	
	for(i = 0; i < 4; i++) {
		mat[i] = malloc(sizeof(int) * 3);
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			mat[i][j] = rand() % 101;
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("mat[%d][%d] -> %d\n", i, j, mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
