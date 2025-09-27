/*
    Transformação de Recursivos para Iterativos

    QUESTÃO 7 - Transformar Contagem Regressiva em Iterativa:

    Pegue a função recursiva do exercício 5 e implemente uma versão iterativa
    usando for ou while.

*/

#include <stdio.h>

int main() {

    int n = 0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    return 0;

}