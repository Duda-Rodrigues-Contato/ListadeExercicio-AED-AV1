/*
    QUESTÃO 10:

    Crie uma struct chamada ContaBancaria, contendo:
        • Nome do titular (string de até 50 caracteres)
        • Número da conta (inteiro)
        • Saldo (float)
    Crie funções para:
        • Depositar um valor na conta
        • Sacar um valor da conta (apenas se houver saldo suficiente)
        • Exibir o saldo
    No main(), crie uma conta bancária e permita que o usuário realize operações.

*/

#include <stdio.h>


typedef struct ContaBancaria {

    char nomeTitular[50];
    int numConta;
    float saldo;

} ContaBancaria;


void depositar(ContaBancaria *conta) {

    float valorDepoito;

    printf("Digite o valor a ser depositado: \n");
    scanf("%f", &valorDepoito);

    conta->saldo += valorDepoito;

    printf("Deposito realizado com sucesso! \n");

}


void sacarValor(ContaBancaria *conta) {

    float valorSacar;

    printf("Digite o valor de saque: \n");
    scanf("%f", &valorSacar);

    if (conta -> saldo >= valorSacar) {
        conta -> saldo -= valorSacar;
        printf("Saldo realizado com sucesso!\n");
    } else {
        printf("Saldo insuficiente!\n");
    }

}


void exibirSaldo(ContaBancaria conta) {

    printf("Seu saldo atual e de: R$ %.2f\n", conta.saldo);

}


int main() {

    ContaBancaria conta;

    int escolhaUsuario;
    conta.saldo = 0;
    char escolhaContinuar = 'S';

    printf("Digite o nome do titular da conta: ");
    scanf(" %[^\n]", conta.nomeTitular);

    printf("Digite o numero da conta: ");
    scanf("%d", &conta.numConta);

    printf("Digite o saldo inicial: ");
    scanf("%f", &conta.saldo);

    printf("Conta criada com sucesso! \n");

    while (escolhaContinuar == 's' || escolhaContinuar == 'S') {

        printf("Escolha a operacao que deseja realizar: \n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Exibir Saldo\n");
        scanf("%d", &escolhaUsuario);

        if (escolhaUsuario == 1) {
            depositar(&conta);
        } else if (escolhaUsuario == 2) {
            sacarValor(&conta);
        } else if (escolhaUsuario == 3) {
            exibirSaldo(conta);
        } else {
            printf("Escolha um valor valido!\n");
        }

        printf("Voce deseja realizar outra operacao? (s/n)\n");
        scanf(" %c", &escolhaContinuar);

    }

    return 0;

}