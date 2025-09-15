/*
    QUESTÃO 8:

    Crie uma struct chamada Retangulo, que contém:
        • Base (float)
        • Altura (float)
    Crie funções para calcular a área e o perímetro do retângulo. No main(), permita
    que o usuário insira os valores e exiba os cálculos.

*/

#include <stdio.h>


typedef struct Retangulo {

    float base;
    float altura;

} Retangulo;


void calcularArea(Retangulo retan) {

    float area = retan.base * retan.altura;

    printf("A AREA do retangulo e: %.2f\n", area);

}


void calcularPermitro(Retangulo retan) {

    float perimetro = 2 * (retan.base + retan.altura);

    printf("O PERIMETRO do retangulo e: %.2f\n", perimetro);

}


int main() {

    Retangulo retan;

    printf("Digite a base: ");
    scanf("%f", &retan.base);

    printf("Digite a altura: ");
    scanf("%f", &retan.altura);

    calcularArea(retan);
    calcularPermitro(retan);

    return 0;

}