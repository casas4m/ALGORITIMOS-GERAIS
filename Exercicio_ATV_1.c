#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* prox;
} No;

No* inicio = NULL;

// Inserir no início
void inserirInicio(int v) {
    No* novo = (No*) malloc(sizeof(No));
    if (!novo) return;

    novo->valor = v;
    novo->prox = inicio;
    inicio = novo;
}

// Inserir no fim
void inserirFim(int v) {
    No* novo = (No*) malloc(sizeof(No));
    if (!novo) return;

    novo->valor = v;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
        return;
    }

    No* aux = inicio;
    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = novo;
}

// Remover por valor
void removerValor(int v) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    No *aux = inicio, *ant = NULL;

    while (aux != NULL && aux->valor != v) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Valor nao encontrado!\n");
        return;
    }

    if (ant == NULL)
        inicio = aux->prox;
    else
        ant->prox = aux->prox;

    free(aux);
    printf("Valor removido!\n");
}

// Mostrar lista
void mostrar() {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    No* aux = inicio;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int main() {
    int opcao, valor;

    do {
        printf("\n1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Remover por valor\n");
        printf("4 - Mostrar lista\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirInicio(valor);
                break;
            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
                inserirFim(valor);
                break;
            case 3:
                printf("Valor: ");
                scanf("%d", &valor);
                removerValor(valor);
                break;
            case 4:
                mostrar();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    // Liberar memória
    while (inicio != NULL) {
        No* aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}
