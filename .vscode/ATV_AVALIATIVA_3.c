
#include <stdio.h>
#include <string.h>

int main() {
    float temperaturas[12], soma = 0.0, media;
    const char* meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    // Entrada
    printf("Digite a temperatura média de cada mês do ano:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d - %s: ", i + 1, meses[i]);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    // Processamento
    media = soma / 12;

    // Saída
    printf("\nTemperaturas acima da média anual (%.2f ºC):\n", media);
    for (int i = 0; i < 12; i++) {
        if (temperaturas[i] > media) {
            printf("%d - %s - %.1f ºC\n", i + 1, meses[i], temperaturas[i]);
        }
    }

    return 0;
}
