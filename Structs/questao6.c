/*
    QUESTÃO 6:

    Crie uma struct chamada Livro, que contenha:
        • Título (string de até 50 caracteres)
        • Autor (string de até 50 caracteres)
        • Ano de publicação (inteiro)
    Crie uma função que recebe um vetor de Livro e exibe os livros publicados após
    um determinado ano (definido pelo usuário).

*/

#include <stdio.h>


typedef struct Livro {

    char titulo[50];
    char autor[50];
    int anoPubli;

} Livro;


void livrosFiltro(Livro livros[], int qntdLivros, int ano) {

    printf("A lista de livros publicados depois de %d e: \n", ano);
    for (int i = 0; i < qntdLivros; i++) {
        if (livros[i].anoPubli > ano) {
            printf("Titulo: %s | Autor: %s | Ano de Publicacao: %d\n", livros[i].titulo, livros[i].autor, livros[i].anoPubli);
        }
    }

}

int main() {

    int qntdLivros = 0;
    int anoFiltro = 0;

    printf("Digite a quantidade de livros que voce quer digitar: ");
    scanf("%d", &qntdLivros);

    Livro livro[qntdLivros];

    for (int i = 0; i < qntdLivros; i++) {

        printf("Digite o titulo do livro: ");
        scanf(" %[^\n]", livro[i].titulo);
        printf("Digite o autor do livro: ");
        scanf(" %[^\n]", livro[i].autor);
        printf("Digite o ano de publicacao do livro: ");
        scanf("%d", &livro[i].anoPubli);

    }

    printf("Digite o ano para filtro: ");
    scanf("%d", &anoFiltro);

    livrosFiltro(livro, qntdLivros, anoFiltro);

    return 0;

}