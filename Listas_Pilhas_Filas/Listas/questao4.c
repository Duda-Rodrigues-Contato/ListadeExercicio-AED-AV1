/*
    QUESTÃO 4 - Reverter uma Lista Encadeada:

    Implemente uma função que inverte a ordem dos elementos de uma lista
    encadeada sem criar uma nova lista.

*/

#include <stdio.h>
#include <stdlib.h>


typedef struct No {

    int dado;
    struct No* prox;

} No;


// Inserir no inicio:
No* inserir(No* lista, int valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = NULL;

    if (!lista) {

        return novo;

    }

    No* temp = lista;

    while (temp -> prox)
        temp = temp -> prox;

    temp -> prox = novo;

    return lista;

}


// Inverter ordem:
No* inverterLista(No* lista) {

    No* atual = lista;
    No* anterior = NULL;

    while (atual != NULL) {

        No* prox = atual -> prox;
        atual -> prox = anterior;
        anterior = atual;
        atual = prox;

    }

    return anterior;

}


// Imprimir lista:
void imprimirLista(No* lista) {

    No* tempImprimir = lista;

    while (tempImprimir) {

        printf("%d -> ", tempImprimir -> dado);
        tempImprimir = tempImprimir -> prox;

    }

    printf("NULL \n");

}



int main() {

    No* lista = NULL;

    // Exemplo com 10, 20, 30, 35, 40 e 45:
    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);
    lista = inserir(lista, 35);
    lista = inserir(lista, 40);
    lista = inserir(lista, 45);

    printf("Lista ANTES da inversao: \n");
    imprimirLista(lista);

    lista = inverterLista(lista);
    printf("Lista DEPOIS da inversao: \n");
    imprimirLista(lista);

    return 0;

}