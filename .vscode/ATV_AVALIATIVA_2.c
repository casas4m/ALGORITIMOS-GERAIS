#include <stdio.h>

int main() {
    float salario, novo_salario, aumento;
    int percentual;

    // Entrada
    printf("Digite o salário atual do colaborador: R$ ");
    scanf("%f", &salario);

    // Processamento
    if (salario <= 280.00) {
        percentual = 20;
    } else if (salario > 280.00 && salario <= 700.00) {
        percentual = 15;
    } else if (salario > 700.00 && salario <= 1500.00) {
        percentual = 10;
    } else {
        percentual = 5;
    }

    // Calculo
    aumento = salario * percentual / 100.0;
    novo_salario = salario + aumento;

    // Saída
    printf("\n--- Reajuste Salarial ---\n");
    printf("Salário antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento aplicado: %d%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário após o aumento: R$ %.2f\n", novo_salario);

    return 0;
}
