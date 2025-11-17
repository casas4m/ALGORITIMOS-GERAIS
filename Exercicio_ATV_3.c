#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char nome[50];
    int senha;
    struct No* prox;
} No;

No* inicio = NULL;
No* fim = NULL;
int contadorSenha = 1;

// Enfileirar (gerar nova senha)
void enfileirar(char nome[]) {
    No* novo = (No*) malloc(sizeof(No));
    if (!novo) return;

    strcpy(novo->nome, nome);
    novo->senha = contadorSenha++;
    novo->prox = NULL;

    if (fim == NULL) {
        inicio = fim = novo;
    } else {
        fim->prox = novo;
        fim = novo;
    }

    printf("Pessoa %s adicionada com senha %d\n", nome, novo->senha);
}

// Desenfileirar (chamar próxima pessoa)
void desenfileirar() {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    No* aux = inicio;
    printf("Chamando %s (senha %d)\n", aux->nome, aux->senha);
    inicio = inicio->prox;

    if (inicio == NULL) fim = NULL;

    free(aux);
}

// Mostrar fila
void mostrarFila() {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Fila atual:\n");
    No* aux = inicio;
    while (aux != NULL) {
        printf("Senha %d - Nome: %s\n", aux->senha, aux->nome);
        aux = aux->prox;
    }
}

int main() {
    int opcao;
    char nome[50];

    do {
        printf("\n1 - Gerar nova senha e enfileirar\n");
        printf("2 - Chamar próxima pessoa\n");
        printf("3 - Mostrar fila\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch(opcao) {
            case 1:
                printf("Nome: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = 0; // remover \n
                enfileirar(nome);
                break;

            case 2:
                desenfileirar();
                break;

            case 3:
                mostrarFila();
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 4);

    // Liberar memória restante
    while (inicio != NULL) {
        No* aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }

    return 0;
}
