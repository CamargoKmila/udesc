#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cabeca;
    int cauda;
    int tamanho;
    int* v;
} Fila;

Fila* criar(int tamanho) {
    Fila* fila = malloc(sizeof(Fila));
    fila->v = malloc(sizeof(int) * tamanho);
    fila->tamanho = tamanho;
    fila->cabeca = -1;
    fila->cauda = -1;

    return fila;
}

int vazia(Fila* fila) {
    return fila->cabeca == -1 && fila->cauda == -1;
}

int cheia(Fila* fila) {
    return (fila->cauda + 1) % fila->tamanho == fila->cabeca;
}

void adicionar(Fila* fila, int valor) {
    if (!cheia(fila)) {
        fila->cauda = (fila->cauda + 1) % fila->tamanho;
        
        if (fila->cabeca == -1) {
            fila->cabeca = fila->cauda;
        }

        fila->v[fila->cauda] = valor;
    } else {
        printf("Fila cheia\n");
        exit(0);
    }
}

int remover(Fila* fila) {
    if (!vazia(fila)) {
        int valor = fila->v[fila->cabeca];
        
        if (fila->cabeca == fila->cauda) {
            fila->cabeca = -1;
            fila->cauda = -1;
        } else {
            fila->cabeca = (fila->cabeca + 1) % fila->tamanho;
        }

        return valor;
    } else {
        printf("Fila vazia\n");
        exit(0);
    }
}

int peek(Fila* fila) {
    if (!vazia(fila)) {
        return fila->v[fila->cauda];
    } else {
        printf("Fila vazia\n");
        exit(0);
    }
}

int main() {
    int tamanho = 10;
    int valor = 1;

    Fila* fila = criar(tamanho);

    while (!cheia(fila)) {
        adicionar(fila, valor++);
        printf("%d ", peek(fila));
    }

    printf("\n");

    while (!vazia(fila)) {
        printf("%d ", remover(fila));
    }

    printf("\n");
}