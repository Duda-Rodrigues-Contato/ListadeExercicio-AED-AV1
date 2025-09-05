/*
    QUESTÃO 1:

    Crie uma struct chamada Pessoa, que contém os seguintes campos:
        • Nome (string de até 50 caracteres)
        • Idade (inteiro)
        • Altura (float)
    No programa principal, declare uma 
    variável do tipo Pessoa, preencha os 
    dados do usuário via teclado e exiba as informações.

*/

#include <stdio.h>


typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
} Pessoa;


int main() {
    
    Pessoa pessoa;

    printf("Digite o nome do usuario: ");
    scanf("%[^\n]", pessoa.nome);
    printf("Digite a idade do usuario: ");
    scanf("%d", &pessoa.idade);
    printf("Digite a altura do usuario: ");
    scanf("%f", &pessoa.altura);

    printf("Nome = %s\n", pessoa.nome);
    printf("Idade = %d\n", pessoa.idade);
    printf("Altura = %.2f\n", pessoa.altura);

    return 0;

}