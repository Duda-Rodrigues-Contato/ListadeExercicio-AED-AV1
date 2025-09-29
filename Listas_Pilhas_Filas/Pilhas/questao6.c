/*
    QUESTÃO 6 - Verificar se uma Expressão com Parênteses Está Correta:

    Crie uma função que recebe uma string contendo "(" e ")" e verifica se os
    parênteses estão balanceados.
    
        Exemplo:
        entrada: "(())()" → saída: Válido
        entrada: "(()" → saída: Inválido

*/

#include <stdio.h>


typedef struct No {

    char dado;
    struct No* prox;

} No;


No* empilhar(No* topo, char valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = topo;

    return novo;

}


No* desempilhar(No* topo, char* valor) {

    if (topo == NULL)
        return NULL;

    No* temp = topo;
    *valor = topo -> dado;
    topo = topo -> prox;

    free(temp);

    return topo;

}


void verificar(char expressao[]) {

    No* pilha = NULL;
    int viradoEsq = 0, viradoDir = 0;

    for(int i = 0; expressao[i] != '\0'; i++) {

        pilha = empilhar(pilha, expressao[i]);

    }

    while (pilha != NULL) {

        char carac;

        pilha = desempilhar(pilha, &carac);

        if (carac == '(') {
            viradoDir++;
        } else if (carac == ')') {
            viradoEsq++;
        }

    }

    if (viradoDir == viradoEsq) {
        printf("Expressao valida!\n");
    } else {
        printf("Expressao INvalida!\n");
    }

}


int main() {

    char expressao[100];

    printf("Digite a expressao: \n");
    scanf(" %[^\n]", expressao);

    verificar(expressao);

    return 0;

}