/*
    QUESTÃO 4:

    Implemente uma função recursiva que calcula o produto de dois números
    inteiros a e b apenas usando somas sucessivas (sem usar *).
        Exemplo:
        • produto(5, 3) → 5 + 5 + 5 = 15
        • produto(7, 2) → 7 + 7 = 14
    
*/

#include <stdio.h>

produto(int num1, int num2) {

    if (num2 == 0) {
        return 0;
    } 
    if (num2 == 1) {
        return num1;
    }
    else {
        return num1 + produto(num1, num2 - 1);
    }

}


int main() {

    int num1 = 0,  num2 = 0, resultado = 0;

    printf("Digite o numero 1 (o que quer somar): ");
    scanf("%d", &num1);

    printf("Digite o numero 2 (o que voce quer multiplicar): ");
    scanf("%d", &num2);

    resultado = produto(num1, num2);

    printf("A soma de %d e %d sem multiplicar eh: %d\n", num1, num2, resultado);

    return 0;

}