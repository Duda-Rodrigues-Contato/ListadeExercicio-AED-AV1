/*
    QUESTÃO 8 - Converter um Número Decimal para Binário Usando Pilha:

    Crie um programa que converta um número decimal em binário usando uma
    pilha.
    
    Exemplo:
        entrada: 10 → saída: 1010
        entrada: 25 → saída: 11001

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int dado;
    struct No* prox;

} No;


// Empilhar dividindo por 2:
No* empilhar(No* topo, int valor) {

    No* novo = (No*) malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = topo;
    
    return novo;

}


// Função pra divisão:
int divisaoBinario(int n, No* pilha) {

    int binario = 0;

    while (n > 0) {

        binario = n % 2;
        pilha = empilhar(pilha, binario);

        n = n / 2;

    }

    return pilha;
    
}


// Exibir elementos:
void top(No* topo) {

    printf("O numero em binario eh:\n");
    while (topo) {
     
        printf("%d \n", topo -> dado);
        topo = topo -> prox;

    }

    printf("\n");
    
}


int main() {

    No* pilha = NULL;
    int valor = 0;

    printf("Digite o valor que voce quer trasnformar em binario: ");
    scanf("%d", &valor);

    pilha = divisaoBinario(valor, pilha);

    top(pilha);

    return 0;
    
}