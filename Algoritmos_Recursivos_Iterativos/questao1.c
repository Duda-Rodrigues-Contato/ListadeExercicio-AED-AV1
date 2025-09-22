/*
    QUESTÃO 1 - Número de Dígitos de um Inteiro:

    Implemente uma função recursiva que recebe um número inteiro n e retorna a
    quantidade de dígitos que ele possui.
        Exemplo:
        • contar_digitos(12345) → 5
        • contar_digitos(7) → 1

*/

#include <stdio.h>

int cont = 0;


int contar_digitos(int n) {

    if (n == 0) {
        cont++;
        return cont;
    } else {
        cont++;
        return contar_digitos(n / 10);
    }

} 


int main() {

    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    printf("O numero de digitos e: %d", contar_digitos(num));

    return 0;

}