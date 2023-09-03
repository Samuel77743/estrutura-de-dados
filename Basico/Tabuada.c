#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	//TABUADA USANDO LAÇOS FOR
	setlocale(LC_ALL, "Portuguese");
	
	printf("========== TABUADA ==========\n");
	
	int fator1, fator2;
	
	for(fator1 = 1; fator1 <= 10; fator1++) {
		for(fator2 = 0; fator2 <= 10; fator2++) {
			printf("%2d x %2d = %2d\n", fator1, fator2, fator1*fator2);
		}
		printf("\n");
	}
}