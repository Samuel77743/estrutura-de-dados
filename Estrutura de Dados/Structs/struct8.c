#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char categoria[50];
	char marca[50];
	float preco;
} Eletronico;

void imprimir(Eletronico p) {
	printf("\n=== IMPRESSÃO ===\n");
	printf("CATEGORIA.... %s", p.categoria);
	printf("MODELO....... %s", p.marca);
	printf("PREÇO........ R$%.2f\n", p.preco);
}

Eletronico preencher() {
	Eletronico produto;
	
	printf("\n=== PREENCHENDO DADOS DE PRODUTO ===\n");
	printf("CATEGORIA -> ");
	fgets(produto.categoria, 50, stdin);
	printf("MODELO -> ");
	fgets(produto.marca, 50, stdin);
	printf("PREÇO -> ");
	scanf("%f", &produto.preco);
	scanf("%c");
	
	return produto;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	Eletronico prod = preencher();
	imprimir(prod);
}