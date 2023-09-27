#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  struct no* anterior;
  struct no* proximo;
  int v;
} No;

typedef struct {
  No* cabeca;
  No* cauda;
} Deque;

Deque* criar() {
    Deque* deque = malloc(sizeof(Deque));
    deque->cabeca = NULL;
    deque->cauda = NULL;
    return deque;
}

int vazia(Deque* deque) {
    return deque->cabeca == NULL && deque->cauda == NULL;
}

void adicionarFim(Deque* deque, int valor) {
    No* no = malloc(sizeof(No));
    no->anterior = NULL;
    no->proximo = NULL;
    no->v = valor;
    
    if (vazia(deque)) {
        deque->cabeca = no;
        deque->cauda = no;
    } else {
        deque->cauda->proximo = no;
        no->anterior = deque->cauda;
        deque->cauda = no;
    }
}

void adicionarInicio(Deque* deque, int valor) {
    No* no = malloc(sizeof(No));
    no->anterior = NULL;
    no->proximo = NULL;
    no->v = valor;
    
    if (vazia(deque)) {
        deque->cabeca = no;
        deque->cauda = no;
    } else {
        deque->cabeca->anterior = no;
        no->proximo = deque->cabeca;
        deque->cabeca = no;
    }
}

int removerInicio(Deque* deque) {
    if (!vazia(deque)) {
        No* no = deque->cabeca;
        int valor = no->v;
        if (deque->cabeca == deque->cauda) {
            deque->cabeca = NULL;
            deque->cauda = NULL;
        } else {
            deque->cabeca = deque->cabeca->proximo;
            deque->cabeca->anterior = NULL;
        }

        free(no);
        return valor;
    } else {
        printf("Deque vazio!");
        exit(0);
    }
}

int removerFim(Deque* deque) {
    if (!vazia(deque)) {
        No* no = deque->cauda;
        int valor = no->v;
        if (deque->cabeca == deque->cauda) {
            deque->cabeca = NULL;
            deque->cauda = NULL;
        } else {
            deque->cauda = deque->cauda->anterior;
            deque->cauda->proximo = NULL;
        }

        free(no);
        return valor;
    } else {
        printf("Deque vazio!");
        exit(0);
    }
}