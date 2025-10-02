/*

    Transformação de Recursivos para Iterativos

    QUESTÃO 10 - Transformar Produto de Dois Números em Iterativo:

    Pegue a função do exercício 4 e implemente uma versão iterativa que calcula
    o produto usando apenas somas sucessivas.

*/

#include <stdio.h>


int somas_sucessivas(int num1, int num2) {

    int soma = 0;

    for (int i = 0; i < num2; i++) {
        
        soma += num1;

    }

    return soma;

}


int main() {

    int num1 = 0,  num2 = 0, resultado = 0;

    printf("Digite o numero 1 (o que quer somar): ");
    scanf("%d", &num1);

    printf("Digite o numero 2 (o que voce quer multiplicar): ");
    scanf("%d", &num2);

    resultado = somas_sucessivas(num1, num2);

    printf("O resultado da soma sucessiva de %d e %d eh: %d\n", num1, num2, resultado);
    
    return 0;

}