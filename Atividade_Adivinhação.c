#include <stdio.h>

int main() {
    int numero_correto, tentativa;

    // Lê o número correto (primeira entrada)
    scanf("%d, &numero_correto");

    // Repete até o jogador acertar
    do {
        scanf("%d", &tentativa);

        if (tentativa < numero_correto) {
            printf("0 numero correto e maior.\n");
        } else if (tentativa > numero_correto) {
            printf("O numero correto e menor.\n");
        } else {
            printf("Parabens! Voce acertou.\n");
        }
    } while (tentativa != numero_correto);

    return 0;
}