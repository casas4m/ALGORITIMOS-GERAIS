#include <stdio.h>
#include <string.h>

#define TAM 5

// Definição da struct Pessoa
typedef struct {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
} Pessoa;

int main() {
    Pessoa pessoas[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("=== Cadastro da pessoa %d ===\n", i + 1);

        // Nome
        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        // Remove o \n do final (caso exista)
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        // Ano de nascimento
        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);

        // Sexo
        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &pessoas[i].sexo);
            pessoas[i].sexo = toupper(pessoas[i].sexo);
            if (pessoas[i].sexo != 'M' && pessoas[i].sexo != 'F') {
                printf("Entrada inválida! Digite apenas M ou F.\n");
            }
        } while (pessoas[i].sexo != 'M' && pessoas[i].sexo != 'F');

        // Altura
        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        // Peso
        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        // CPF
        printf("CPF: ");
        scanf("%lf", &pessoas[i].cpf);

        // Limpar buffer do teclado antes do próximo fgets
        getchar();

        printf("\n");
    }

    // Exibição dos dados
    printf("\n===== DADOS CADASTRADOS =====\n");
    for (int i = 0; i < TAM; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f m\n", pessoas[i].altura);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("CPF: %.0lf\n", pessoas[i].cpf);
    }

    return 0;
}