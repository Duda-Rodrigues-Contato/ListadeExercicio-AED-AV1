/*
    Transformação de Recursivos para Iterativos

    QUESTÃO 8 - Transformar Maior Elemento em Iterativo:

    Pegue a função recursiva do exercício 2 e implemente uma versão iterativa
    para encontrar o maior elemento do vetor.

*/

#include <stdio.h>

int maior_elemento(int vetor[], int n) {

    int maior = vetor[0];

    for (int i = 0; i < n; i++) {

        if (vetor[i] > maior) {

            maior = vetor[i];

        } else {

            continue;

        }

    }

    return maior;

}


int main() {

    int vetor[5];
    int maiorNum = 0;  

    for (int i = 0; i < 5; i++) {

        printf("Digite os numeros no vetor: \n");
        scanf("%d", &vetor[i]);
    }

    maiorNum = maior_elemento(vetor, 5);

    printf("O maior elemento eh: %d", maiorNum);
    
    return 0;
    
}