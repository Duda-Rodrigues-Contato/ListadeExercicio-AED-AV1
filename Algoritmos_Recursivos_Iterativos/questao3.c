/*
    QUESTÃO 3:

    Implemente uma função recursiva que recebe um número inteiro n e retorna a
    soma de seus dígitos.
        Exemplo: 
        soma_digitos(1234) → 1 + 2 + 3 + 4 = 10.
    
*/

#include <stdio.h>

int soma_digitos(int n) {

    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    else {
        return (n % 10) + soma_digitos(n / 10);
    }
}


int main() {

    int n = 0, somaTotal = 0;

    printf("Digite o bumero: ");
    scanf("%d", &n);

    somaTotal = soma_digitos(n);

    printf("A soma dos digitos de %d eh: %d\n", n, somaTotal);

    return 0;
    
}