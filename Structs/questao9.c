/*
    QUESTÃO 9:

    Crie uma struct chamada Paciente, contendo:
        • Nome (string de até 50 caracteres)
        • Idade (inteiro)
        • Diagnóstico (string de até 100 caracteres)
    Crie uma função que recebe um vetor de Paciente e exibe todos os pacientes
    acima de 60 anos.

*/

#include <stdio.h>


typedef struct Paciente {

    char nome[50];
    int idade;
    char diagnostico[100];

} Paciente;


void exibirPaciente(Paciente paciente[], int qtdPaci) {

    printf("Aqui esta a lista com os pacientes maiores de 60 anos\n");
    printf("\n");

    for (int i = 0; i < qtdPaci; i++) {
        if (paciente[i].idade > 60) {
            printf("Nome do paciente: %s\n", paciente[i].nome);
            printf("Idade do paciente: %d\n", paciente[i].idade);
            printf("Diagnostico do paciente: %s\n", paciente[i].diagnostico);

        }
    }
}


int main() {

    int qtdPaci = 0;

    printf("Digite a qtd de pacientes: ");
    scanf("%d", &qtdPaci);

    Paciente paciente[qtdPaci];

    for(int i = 0; i < qtdPaci; i++) {

        printf("Digite o nome: ");
        scanf(" %[^\n]", paciente[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &paciente[i].idade);

        printf("Digite o diagnostico: ");
        scanf(" %[^\n]", paciente[i].diagnostico);

        printf("\n");
        
    }

    exibirPaciente(paciente, qtdPaci);

    return 0;

}