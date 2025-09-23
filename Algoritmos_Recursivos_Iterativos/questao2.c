/*
    QUESTÃO 2:

    Crie uma função recursiva que recebe um vetor de inteiros e seu tamanho n e
    retorna o maior valor presente no vetor.
        Exemplo:
        int maior_elemento(int vet[], int n);
    
*/

#include <stdio.h>


int maior_elemento(int vetor[], int n) {

    if (n == 1) {
        return vetor[0];
    } else {

        int maior = maior_elemento(vetor, n - 1); 
        
        if (vetor[n - 1] > maior) {
            return vetor[n - 1];
        } else {
            return maior;
        }

    }

}


int main() {

    int vetor[5];
    int maiorNum = 0;  

    for (int i = 0; i < 5; i++) {

        printf("Digite os numeros no vetor: \n");
        scanf("%d", &vetor[i]);
    }

    maiorNum = maior_elemento(vetor, 5);
    printf("O maior numero do vetor e: %d", maiorNum);
    
    return 0;
    
}