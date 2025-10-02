/*

    Transformação de Recursivos para Iterativos

    QUESTÃO 9 - Transformar Soma dos Dígitos em Iterativo:

    Pegue a função do exercício 3 e implemente uma versão iterativa que calcula
    a soma dos dígitos.

*/

#include <stdio.h>

int soma_digitos_iterativo(int n) {

    int soma = 0;

    while(n != 0) {

        soma += n % 10;
        n = n/10;

    }

    return soma;

}


int main() {

    int n = 0, somaTotal = 0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    somaTotal = soma_digitos_iterativo(n);

    printf("A soma dos digitos eh: %d\n", somaTotal);

    return 0;

}