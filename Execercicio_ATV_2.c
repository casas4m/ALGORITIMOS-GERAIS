#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    struct Pessoa* prox;
} Pessoa;

Pessoa* inicio = NULL;

// Inserir no início
void inserirInicio(char nome[], int idade, float altura) {
    Pessoa* nova = (Pessoa*) malloc(sizeof(Pessoa));
    if (!nova) return;

    strcpy(nova->nome, nome);
    nova->idade = idade;
    nova->altura = altura;

    nova->prox = inicio;
    inicio = nova;
}

// Inserir no fim
void inserirFim(char nome[], int idade, float altura) {
    Pessoa* nova = (Pessoa*) malloc(sizeof(Pessoa));
    if (!nova) return;

    strcpy(nova->nome, nome);
    nova->idade = idade;
    nova->altura = altura;
    nova->prox = NULL;

    if (inicio == NULL) {
        inicio = nova;
        return;
    }

    Pessoa* aux = inicio;
    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = nova;
}

// Remover por nome
void removerPorNome(char nome[]) {
    if (!inicio) {
        printf("Lista vazia!\n");
        return;
    }

    Pessoa *aux = inicio, *ant = NULL;

    while (aux && strcmp(aux->nome, nome) != 0) {
        ant = aux;
        aux = aux->prox;
    }

    if (!aux) {
        printf("Pessoa nao encontrada!\n");
        return;
    }

    if (!ant) inicio = aux->prox;
    else      ant->prox = aux->prox;

    free(aux);
    printf("Pessoa removida!\n");
}

// Mostrar todos os registros
void mostrar() {
    if (!inicio) {
        printf("Lista vazia!\n");
        return;
    }

    Pessoa* aux = inicio;

    printf("\n--- LISTA DE PESSOAS ---\n");
    while (aux) {
        printf("Nome: %s | Idade: %d | Altura: %.2f\n",
               aux->nome, aux->idade, aux->altura);
        aux = aux->prox;
    }
    printf("------------------------\n");
}

int main() {
    int opcao;
    char nome[50];
    int idade;
    float altura;

    do {
        printf("\n1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Remover por nome\n");
        printf("4 - Mostrar todos\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao) {
            case 1:
                printf("Nome: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = 0;

                printf("Idade: ");
                scanf("%d", &idade);
                printf("Altura: ");
                scanf("%f", &altura);

                inserirInicio(nome, idade, altura);
                break;

            case 2:
                printf("Nome: ");
                getchar();
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = 0;

                printf("Idade: ");
                scanf("%d", &idade);
                printf("Altura: ");
                scanf("%f", &altura);

                inserirFim(nome, idade, altura);
                break;

            case 3:
                printf("Nome para remover: ");
                getchar();
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = 0;

                removerPorNome(nome);
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

    // Liberar memória ao final
    Pessoa* aux;
    while (inicio) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}

