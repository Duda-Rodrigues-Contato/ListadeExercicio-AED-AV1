/*
    QUESTÃO 7 - Inverter uma String Usando uma Pilha:

    Implemente um programa que use uma pilha para inverter uma string.

*/

#include <stdio.h>

typedef struct No {

    char dado;
    struct No* prox;

} No;


No* empilhar(No* topo, char valor) { //pilha, palavra[i]

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = topo;

    return novo;

}

No* desempilhar(No* topo, char* valor) { // pilha, carac

    if (topo == NULL)
        return NULL;

    No* temp = topo;
    *valor = topo -> dado;
    topo = topo -> prox;

    free(temp);
    return topo;

}


void inverter(char palavra[]) {

    No* pilha = NULL; // Criando a pilha vazia

    for (int i = 0; palavra[i] != '\0'; i++) {
        pilha = empilhar(pilha, palavra[i]);
    }

    printf("A palavra invertida eh: \n");

    while (pilha != NULL) {

        char carac;

        pilha = desempilhar(pilha, &carac);
        printf("%c", carac);

    }

    printf("\n");

}


int main() {

    char palavra[50];

    printf("Digite a palavra: ");
    scanf(" %[^\n]", palavra);

    inverter(palavra);

    return 0;

}