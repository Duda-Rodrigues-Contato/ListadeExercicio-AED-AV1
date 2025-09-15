/*
    QUESTÃO 5:

    Crie um programa que gerencie um pequeno sistema de funcionários. Cada
    funcionário deve ter:
        • Nome (string de até 50 caracteres)
        • Cargo (string de até 30 caracteres)
        • Salário (float)
    Permita ao usuário inserir os dados de N funcionários (onde N é informado pelo
    usuário) e exiba uma lista com todos os funcionários cadastrados.

*/

#include <stdio.h>

typedef struct Func {

    char nome[50];
    char cargo[30];
    float salario;

} Func;


int main() {

    int qntdFunc = 0;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qntdFunc);

    Func func[qntdFunc];

    for (int i = 0; i < qntdFunc; i++) {

        printf("Digite o nome do funcionario: ");
        scanf(" %[^\n]", func[i].nome);
        printf("Digite o cargo do funcionario: "); 
        scanf(" %[^\n]", func[i].cargo);
        printf("Digite o salario do funcionario: ");
        scanf("%f", &func[i].salario);

    }

    for (int i = 0; i < qntdFunc; i++) {

        printf("O nome do funcionario e: %s\n", func[i].nome);
        printf("O cargo do funcionario e: %s\n", func[i].cargo);
        printf("O salario do funcionario e: %.2f\n", func[i].salario);
    
    }

    return 0;

}