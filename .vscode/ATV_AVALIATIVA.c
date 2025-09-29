#include <stdio.h>

int main() {
    float peso, excesso = 0.0, multa = 0.0;
    const float LIMITE = 50.0;
    const float MULTA_POR_KG = 4.0;

    // Entrada
    printf("Digite o peso de peixes trazido (em kg): ");
    scanf("%f", &peso);

   // Processamento
    if (peso > LIMITE) {
        excesso = peso - LIMITE;
        multa = excesso * MULTA_POR_KG;
    }

    // Saida
    printf("Excesso de peso: %.2f kg\n", excesso);
    printf("Multa a pagar: R$ %.2f\n", multa);

    return 0;
}
