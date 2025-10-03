/*
    QUESTÃO 5 - Implementação de uma Pilha com Vetor:

    Implemente uma pilha usando um vetor e forneça as seguintes operações:
    • empilhar: inserir um elemento no topo.
    • desempilhar: remover o elemento do topo.
    • top: exibir o elemento do topo.
    • isEmpty: verificar se a pilha está vazia.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct No {
    
    int dado;
    struct No* prox;

} No;


// empilhar (Inserir elemento no topo):
No* empilhar(No* topo, char valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = topo;

    return novo;

}


// desempilhar (Remover elemento do topo): 
No* desempilhar(No* topo, int valor) {

    if (!topo) 
        return NULL;

    No* temp = topo;

    valor = topo -> dado;
    topo = topo -> prox;

    free(temp);
    return topo;

}


// Top (Exibir elemento do topo):
void top(No* topo) {

    printf("O valor do topo da pilha eh: %d\n", topo -> dado);

}


// isEmpty (Verificar se a pilha está vazia):
void isEmpty(No* topo) {

    if (topo == NULL)
        printf("Pilha Vazia!\n");
    else
        printf("Pilha tem conteudo!\n");

}


int main() {

    No* pilha = NULL;
    int valores[5];

    for (int i = 0; i < 5; i++) {

        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &valores[i]);

    }
 
    printf("\n=====================================\n");
    printf("A pilha esta vazia?\n");
    isEmpty(pilha);

    printf("\n=====================================\n");
    pilha = empilhar(pilha, valores[0]);
    pilha = empilhar(pilha, valores[1]);
    pilha = empilhar(pilha, valores[2]);
    pilha = empilhar(pilha, valores[3]);
    pilha = empilhar(pilha, valores[4]);

    printf("\n=====================================\n");
    top(pilha);

    printf("\n=====================================\n");
    pilha = desempilhar(pilha, valores[0]);
    top(pilha);

    return 0;

}