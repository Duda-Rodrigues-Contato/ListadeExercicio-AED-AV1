/*
    QUESTÃO 9 - Implementação de uma Fila com Vetor:

    Implemente uma fila usando um vetor 
    e forneça as seguintes operações:
        • enqueue: inserir um elemento no final da fila.
        • dequeue: remover um elemento do início da fila.
        • front: exibir o primeiro elemento.
        • isEmpty: verificar se a fila está vazia.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Fila {

    int dado;
    struct Fila* frente;
    struct Fila* atras;

} Fila;


// Criar fila:
Fila* criarFila() {

    Fila* f = (Fila*) malloc(sizeof(Fila));

    f -> frente = f -> atras = NULL;

    return f;

}


// Enqueue (Inserir no final da fila):
void ennfileirar(Fila* f, int vetor) {


    
}


// Dequeue (Remover do inicio da fila):


int main() {

    Fila* fila = criarFila();
    int vetor[5] = {1, 2, 3, 4, 5};
   


    return 0;

}