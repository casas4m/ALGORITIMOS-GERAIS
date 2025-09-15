#include <stdio.h>

int main() {
    int n;
    int quantidade = 0;
    int maior = 0;  // inicialmente 0, para o caso da sequência vazia
    int soma = 0;
    int primeiro_numero = 1; // flag para identificar o primeiro número lido

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        quantidade++;
        soma += n;

        // Atualiza o maior número
        
        if (primeiro_numero || n > maior) {
            maior = n;
            primeiro_numero = 0;
        }
    }

    // Se não leu nenhum número, maior fica 0 (já inicializado)

    printf("%d\n", quantidade);
    printf("%d\n", maior);
    if (quantidade == 0) {
        printf("0.00\n");
    } else {
        printf("%.2f\n", (float)soma / quantidade);
    }

    return 0;
}