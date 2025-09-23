/*
    QUESTÃO 1:

    Implemente uma função recursiva que recebe um número inteiro n e retorna a
    quantidade de dígitos que ele possui.
        Exemplo:
        • contar_digitos(12345) → 5
        • contar_digitos(7) → 1

*/

#include <stdio.h>


int contar_digitos(char *c, int n) {

    if (c[n] == '\0') {
        return 0;
    } else {
        return 1 + contar_digitos(c, n + 1);
    }

} 


int main() {

    int num;
    int qtd_carac = 0;
    char stringcarac[10];

    printf("Digite o numero: ");
    scanf("%d", &num);

    sprintf(stringcarac, "%d", num);
    qtd_carac = contar_digitos(stringcarac, 0);

    printf("O numero de digitos e: %d", qtd_carac);

    return 0;

}