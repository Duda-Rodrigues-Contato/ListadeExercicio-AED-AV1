/*
    QUESTÃO 4:

    Crie uma struct chamada Carro, com os seguintes campos:
        • Modelo (string de até 30 caracteres)
        • Ano (inteiro)
        • Preço (float)
    No programa, declare um ponteiro para uma struct Carro e use malloc() para
    alocar memória dinamicamente. Preencha os dados e exiba as informações antes
    de liberar a memória com free().

*/

#include <stdio.h>


typedef struct Carro {

    char modelo[30];
    int ano;
    float preco;

} Carro;


int main() {

    
    return 0;

}