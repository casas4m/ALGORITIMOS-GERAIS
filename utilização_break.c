#include <stdio.h>

int main() {
    int numero;

    while (1) { // Loop infinito
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Programa encerrado.\n");
            break; // Interrompe o loop
        }

        printf("Voce digitou: %d\n", numero);
    }

    return 0;
}
