/*
Faça um programa que leia um conjunto de números inteiros de tamanho n e armazene
estes valores em uma pilha estática. Em seguida, deve ser exibido todos os valores do
conjunto em ordem inversa à sequência inserção.
○ Exemplo: dado [10,15,3,7], a saída deve ser 7, 6, 15, 10 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    Pilha* pilha = criar(10);
    int valor = 1;
    
    while (!cheia(pilha)) {
        push(pilha, valor++);
    }

    while (!vazia(pilha)) {
        printf("%d\n", pop(pilha));
    }
}