#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

// Cria um nó sem filhos com a chave informada
Node *criaNo(int chave) {
    Node *novo = malloc(sizeof(Node));
    novo->chave = chave;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

// Insere a chave na árvore e retorna a raiz da árvore.
// Chaves menores vão para a esquerda e maiores para a direita.
Node *inserir(Node *raiz, int chave) {
    // IMPLEMENTAR
    return raiz;
}

// Imprime a árvore em pré-ordem: raiz, esquerda, direita
void preOrdem(Node *raiz) {
    if (raiz == NULL)
        return;
    printf(" %d", raiz->chave);
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

// Imprime a árvore em ordem: esquerda, raiz, direita
void emOrdem(Node *raiz) {
    if (raiz == NULL)
        return;
    emOrdem(raiz->esq);
    printf(" %d", raiz->chave);
    emOrdem(raiz->dir);
}

// Libera a memória da árvore
void freeNode(Node *raiz) {
    if (raiz == NULL)
        return;
    freeNode(raiz->esq);
    freeNode(raiz->dir);
    free(raiz);
}
