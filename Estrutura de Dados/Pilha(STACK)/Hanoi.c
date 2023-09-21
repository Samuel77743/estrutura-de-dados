#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um disco
typedef struct {
    int tamanho;
} Disco;

// Estrutura para representar uma pilha
typedef struct {
    Disco** discos;
    int topo;
    int capacidade;
    char nome;
} Pilha;

Pilha* criarPilha(int capacidade, char nome) {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->discos = (Disco**)malloc(sizeof(Disco*) * capacidade);
    pilha->topo = -1;
    pilha->capacidade = capacidade;
    pilha->nome = nome;
    return pilha;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha* pilha) {
    return pilha->topo == pilha->capacidade - 1;
}

void empilhar(Pilha* pilha, Disco* disco) {
    if (!pilhaCheia(pilha)) {
        pilha->discos[++pilha->topo] = disco;
    }
}

Disco* desempilhar(Pilha* pilha) {
    if (!pilhaVazia(pilha)) {
        return pilha->discos[pilha->topo--];
    }
    return NULL;
}

// Função para imprimir o conteúdo da pilha
void imprimirPilha(Pilha* pilha) {
    printf("Conteúdo da Torre %c: ", pilha->nome);
    for (int i = 0; i <= pilha->topo; i++) {
        printf("%d ", pilha->discos[i]->tamanho);
    }
    printf("\n");
}

// Função recursiva para resolver a Torre de Hanói
void resolverTorreHanoi(int num_discos, Pilha* origem, Pilha* auxiliar, Pilha* destino) {
    if (num_discos == 1) {
        Disco* disco = desempilhar(origem);
        empilhar(destino, disco);
        printf("Mova o disco %d da Torre %c para a Torre %c\n", disco->tamanho, origem->nome, destino->nome);
        //free(disco);
        return;
    }

    resolverTorreHanoi(num_discos - 1, origem, destino, auxiliar);
    Disco* disco = desempilhar(origem);
    empilhar(destino, disco);
    printf("Mova o disco %d da Torre %c para a Torre %c\n", disco->tamanho, origem->nome, destino->nome);
    //free(disco);
    resolverTorreHanoi(num_discos - 1, auxiliar, origem, destino);
}

int main() {
    int num_discos;
    
    printf("Digite o número de discos: ");
    scanf("%d", &num_discos);
    
    Pilha* origem = criarPilha(num_discos, 'A');
    Pilha* auxiliar = criarPilha(num_discos, 'B');
    Pilha* destino = criarPilha(num_discos, 'C');
    
    // Inicializa a Torre de origem
    for (int i = num_discos; i >= 1; i--) {
        Disco* disco = (Disco*)malloc(sizeof(Disco));
        disco->tamanho = i;
        empilhar(origem, disco);
    }

    resolverTorreHanoi(num_discos, origem, auxiliar, destino);
    
    free(origem->discos);
    free(auxiliar->discos);
    free(destino->discos);
    free(origem);
    free(auxiliar);
    free(destino);
    
    return 0;
}
