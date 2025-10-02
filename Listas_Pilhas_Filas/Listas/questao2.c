/*
    QUESTÃO 2 - Contagem de Elementos na Lista:

    Modifique o código do exercício 1 e implemente uma função para contar
    quantos elementos existem na lista.

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


// Inserir no final:
No* inserirFinal(No* lista, int valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = NULL;
    
    if (!lista)
        return novo;
    
    No* temp = lista;

    while(temp -> prox) 
        temp = temp -> prox;

    temp -> prox = novo;

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


// Remover elemento específico:
No* removerElementoEspecifico(No* lista, int valor) {

    if (!lista) // Lista == NULL
        return NULL;
    
    // Primeiro elemento da lista:
    if (lista -> dado == valor) {

        No* tempRemove = lista;

        lista = lista -> prox;
        free(tempRemove);

        return lista;

    }

    // Elemento no meio ou final:
    No* atual = lista;
    No* anterior = NULL;

    while (atual != NULL && atual -> dado != valor) {
        
        anterior = atual;
        atual = atual -> prox;

    } 

    if (atual == NULL)
        printf("Elemento nao encontrado\n");
    
    anterior->prox = atual->prox;

    free(atual);
    return lista;


}

/*void imprimirLista(No* lista) {

    No* temp1 = lista;

    while (temp1) {

        printf("%d -> ", temp1 -> dado);
        temp1 = temp1 -> prox;

    }

    printf("NULL \n");

}*/
// Quando elementos existem na lista:
void qntdElementos(No* lista) {

    No* tempCont = lista;
    int cont = 0;

    while (tempCont) {

        cont++;
        tempCont = tempCont -> prox;
        
    }

    printf("A quantidade de elementos eh: %d\n", cont);

}


int main() {

    No* lista = NULL;

    // Exemplo com 10, 20, 30, 35, 40 e 45:
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFinal(lista, 35);
    lista = inserirFinal(lista, 40);
    lista = inserirFinal(lista, 45);

    printf("Antes da remocao: \n");
    imprimirLista(lista);
    qntdElementos(lista);

    printf("Remover 35: \n");
    lista = removerElementoEspecifico(lista, 35);
    imprimirLista(lista);
    qntdElementos(lista);

    return 0;

}