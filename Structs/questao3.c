/*
    QUESTÃO 3:

    Crie uma struct chamada Produto, que contém:
        • Nome do produto (string de até 30 caracteres)
        • Código (inteiro)
        • Preço (float)
    Crie uma função que recebe um Produto como parâmetro e exibe seus dados
    formatados. No main(), instancie um produto, peça ao usuário que insira seus
    valores e chame a função para exibir os dados.

*/

#include <stdio.h>


typedef struct Produto {

    char nomeProduco[30];
    int codigo;
    float preco;

} Produto;


void formatarProduct(Produto p) {

    printf("O produto %s tem codigo %d e preco %.2f", p.nomeProduco, p.codigo, p.preco);

}


int main() {

    Produto p;

    printf("Digite o nome de produto: ");
    scanf(" %[^\n]", p.nomeProduco);

    printf("Digite o codigo do produto: ");
    scanf("%d", &p.codigo);

    printf("Digite o preco do produto: ");
    scanf("%f", &p.preco);

    formatarProduct(p);

    return 0;

}