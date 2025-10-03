/*
    QUESTÃO 3 - Inserção Ordenada na Lista Encadeada:

    Altere a implementação da lista encadeada para que os elementos sejam
    inseridos em ordem crescente automaticamente.

*/

#include <stdio.h>
#include <stdlib.h>


typedef struct No {

    int dado;
    struct No* prox;

} No;


// Inserir no inicio: 
No* inserirInicio(No* lista, int valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = lista;

    return novo;

}


// Inserir em ordem crescente:
No* inserirCrescente(No* lista, int valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = NULL;

    // Lista vazia ou valor novo menor que o primeiro elemento:
    if (lista == NULL || valor < lista -> dado) {
        
        novo -> prox = lista;

        return novo;

    }

    // Outros casos:
    No* atual = lista;

    while (atual -> prox != NULL && atual -> prox -> dado < valor) {

        atual = atual -> prox;

    }

    novo -> prox = atual -> prox;
    atual -> prox = novo;

    return lista;

}


// Imprimir lista:
void imprimirLista(No* lista) {

    No* temp1 = lista;

    while (temp1) {

        printf("%d -> ", temp1 -> dado);
        temp1 = temp1 -> prox;

    }

    printf("NULL \n");

}


int main() {

    No* lista = NULL;

    // Exemplo com 10/, 20, 30/, 35/, 40 e 45/:
    lista = inserirInicio(lista, 10);
    imprimirLista(lista); //Imprimir: 10 -> NULL

    lista = inserirCrescente(lista, 30);
    imprimirLista(lista); //Imprimir: 10 -> 30 -> NULL

    lista = inserirCrescente(lista, 45);
    imprimirLista(lista); //Imprimir: 10 -> 30 -> 45 -> NULL

    lista = inserirCrescente(lista, 35);
    imprimirLista(lista); //Imprimir: 10 -> 30 -> 35 -> 45 -> NULL

    lista = inserirCrescente(lista, 20);
    imprimirLista(lista); //Imprimir: 10 -> 20 -> 30 -> 35 -> 45 -> NULL

    lista = inserirCrescente(lista, 40);

    printf("Lista em ordem crescente: \n");
    imprimirLista(lista); // Imprimir: 10 -> 20 -> 30 -> 35 -> 40 -> 45 -> NULL

    return 0;
    
}