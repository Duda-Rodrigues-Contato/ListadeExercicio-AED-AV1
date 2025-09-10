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
#include <stdlib.h>


typedef struct Carro {

    char modelo[30];
    int ano;
    float preco;

} Carro;


int main() {

    Carro *carro = malloc(sizeof(Carro));

    printf("Digite o modelo do carro: \n");
    scanf(" %[^\n]", carro->modelo);
    printf("Digite o ano do carro: \n");
    scanf("%d", &carro->ano);
    printf("Digite o preco do carro: \n");
    scanf("%f", &carro->preco);

    printf("O modelo do carro e: %s\n", carro->modelo);
    printf("O ano do carro e: %d\n", carro->ano);
    printf("O preco do carro e: %.2f\n", carro->preco);

    free(carro);
    return 0;

}