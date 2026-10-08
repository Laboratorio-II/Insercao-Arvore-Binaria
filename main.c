#include <stdio.h>
#include "arvore.h"

int main() {
    Node *raiz = NULL;
    int n, x;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        raiz = inserir(raiz, x);
    }

    printf("Pre-ordem:");
    preOrdem(raiz);
    printf("\nEm ordem:");
    emOrdem(raiz);
    printf("\n");

    freeNode(raiz);
    return 0;
}
