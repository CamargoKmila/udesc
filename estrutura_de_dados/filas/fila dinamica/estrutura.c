#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    int valor;
    struct no* proximo;
} No;

typedef struct {
    No* cabeca;
    No* cauda;
} Fila;

Fila* criar() {
    Fila* fila = malloc(sizeof(Fila));
    fila->cabeca = NULL;
    fila->cauda = NULL;
    return fila;
}

int vazia(Fila *fila) {
    return fila->cabeca == NULL && fila->cauda == NULL;
}

void adicionar(Fila* fila, int valor) {
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo = NULL;
    if (vazia(fila)) {
        fila->cabeca = no;
    } else {
        fila->cauda->proximo = no;
    }
    fila->cauda = no;
}

int remover(Fila* fila) {
    if (!vazia(fila)) {
        No* no = fila->cabeca;
        int valor = no->valor;
        fila->cabeca = no->proximo;
        if (fila->cabeca == NULL) {
            fila->cauda = NULL;
        }
        free(no);
        return valor;
    } else {
        printf("Fila vazia!");
        exit(0);
    }
}

int peek(Fila* fila) {
    if (!vazia(fila)) {
        return fila->cauda->valor;
    } else {
        printf("Fila vazia!");
        exit(0);
    }
}

int main() {
    Fila* fila = criar();
    int n = 10;
    
    printf("[ ");
    for (int i = 1; i <= n; i++) {
        adicionar(fila, i);
        printf("%d ", peek(fila));
    }

    printf("]\n[ ");
    
    while (!vazia(fila)) {
        printf("%d ", remover(fila));
    }
    
    printf("]\n");
}