/*
    QUESTÃO 7:

    Crie uma agenda telefônica usando structs, onde cada contato possui:
        • Nome (string de até 50 caracteres)
        • Telefone (string de até 15 caracteres)
    O programa deve permitir adicionar contatos e buscar um contato pelo nome.

*/

#include <stdio.h>
#include <string.h>

#define NUM_MAXIMO_CTT 100

typedef struct Agenda {

    char nome[50];
    char telefone[15];

} Agenda;

Agenda agenda[NUM_MAXIMO_CTT];

int numCttAdd = 0;

void adicionarCtt() {

    // Testar se precisa sem SEM ESPAÇO
    printf("Digite o nome do contato (todo minusculo): \n");
    scanf(" %[^\n]", agenda[numCttAdd].nome);

    printf("Digite o numero de telefone (ddd numero, sem ()\n");
    scanf(" %[^\n]", agenda[numCttAdd].telefone);

    numCttAdd++;
    printf("Contato adicionado com sucesso!\n");

}


void buscarContato() {

    char nomeBuscar[50];
    int cttAchado = 0;

    printf("Digite o nome do contato que deseja buscar: \n");
    scanf(" %[^\n]", nomeBuscar);

    for (int i = 0; i < numCttAdd; i++) {

        if (strcmp(agenda[i].nome, nomeBuscar) == 0) {

            printf("ACHAMOS O CONTATO\n");
            printf("Nome do contato: %s\n", agenda[i].nome);
            printf("O numero de telefone do contato: %s\n", agenda[i].telefone);
            cttAchado = 1;
            break;

        }
        
    }

    if (cttAchado == 0) {
        printf("Contato nao encontrado!\n");

    }

}


int main() {

    int opcao;
    char escolhaUsuario = 'S';

    while (escolhaUsuario == 'S' || escolhaUsuario == 's') {

        printf("Escolha uma opcao: \n");
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar contato pelo nome\n");
        printf("3 - Sair\n");

        scanf("%d", &opcao);

        if (opcao == 1) {
            adicionarCtt();
        } else if (opcao == 2) {
            buscarContato();
        } else if (opcao == 3) {
            break;
        } else {
            printf("Escolha um numero valido!\n");
        }

        printf("Voce deseja realizar outra operacao? (s/n)\n");
        scanf(" %c", &escolhaUsuario);

    }

    return 0;

}