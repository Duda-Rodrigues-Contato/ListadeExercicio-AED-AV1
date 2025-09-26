/*
    QUESTÃO 5 - Contagem Regressiva:

    Crie uma função recursiva que recebe um número n e imprime uma contagem
    regressiva até 0.
        Exemplo: 
        contagem_regressiva(5) → 5, 4, 3, 2, 1, 0.
    
*/

#include <stdio.h>

int contagem(int n) {

    if (n < 0) {
        return 0; 
    } else {
        printf("%d ", n);
        return contagem(n - 1);
    }
    
}


int main() {

    int n = 0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    contagem(n);

    return 0;

}