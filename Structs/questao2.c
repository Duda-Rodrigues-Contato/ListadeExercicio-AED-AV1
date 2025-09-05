/*
    QUESTÃO 2:

    Crie um vetor de 5 elementos da struct Aluno, que contém:
        • Nome (string de até 50 caracteres)
        • Matrícula (inteiro)
        • Nota (float)
    Solicite ao usuário que insira os dados dos 5 alunos e depois exiba a média das
    notas.

*/

#include <stdio.h>


typedef struct Aluno {

    char nome[50];
    int matricula;
    float nota;

} Aluno;


int main() {

    Aluno alunos[5];

    for (int i = 0; i < 5; i++) {

        printf("Digite o nome do aluno: \n");
        scanf(" %[^\n]", alunos[i].nome);
        printf(" ");
        printf("Digite a matricula do aluno: \n");
        scanf("%d", &alunos[i].matricula);
        printf(" ");
        printf("Digite a nota do aluno: \n");
        scanf("%f", &alunos[i].nota);
        printf(" ");

    }

    for (int i = 0; i < 5; i++) {
        
        printf("O nome do aluno %d e: %s\n", i + 1, alunos[i].nome);
        printf("A matricula do aluno %d e: %d\n", i + 1, alunos[i].matricula);
        printf("A nota do aluno %d e: %.2f\n", i + 1, alunos[i].nota);

    }

    return 0;

}