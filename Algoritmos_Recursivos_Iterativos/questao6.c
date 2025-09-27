/*
    QUESTÃO 6:

    Implemente uma função recursiva que recebe uma string e retorna 1 se for um
    palíndromo e 0 caso contrário.
        Exemplo:
        • palindromo("arara") → 1
        • palindromo("casa") → 0

*/

#include <stdio.h>
#include <string.h>

int palindromo(char vetor[], int inicio, int fim) {

    if (inicio >= fim) {
        return 1;
    }
    if (vetor[inicio] != vetor[fim]) {
        return 0;
    }
    else {
        return palindromo(vetor, inicio + 1, fim - 1);
    }


}


int main() {

    char vetor[20];
    int inicio = 0, fim, result;

    printf(" Digite uma palavra: ");
    scanf(" %[^\n]", vetor);

    fim = strlen(vetor) - 1;

    result = palindromo(vetor, inicio, fim);

    if (result == 1) {
        printf("A palavra %s EH um palindromo \n", vetor);
    } else if (result == 0) {
        printf("A palavra %s NAO EH um palindromo \n", vetor);
    }

    return 0;
    
}