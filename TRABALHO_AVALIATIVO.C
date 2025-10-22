#include <stdio.h>
#include <string.h>  // Para manipulação de strings

// Função para somar dois números
int soma(int x, int y) {
    return x + y;
}

int main() {
    // Exemplo de Tipos de Dados e Operadores
    int a = 10, b = 5;
    float c = 7.5, d = 2.0;
    printf("Soma de inteiros: %d\n", a + b);
    printf("Divisão de floats: %.2f\n", c / d);
    
    // Exemplo de Condicional if-else
    if (a > b) {
        printf("a é maior que b\n");
    } else {
        printf("b é maior que a\n");
    }
    
    // Exemplo de Estrutura switch
    switch (a) {
        case 10:
            printf("a é 10\n");
            break;
        case 5:
            printf("a é 5\n");
            break;
        default:
            printf("a não é nem 10 nem 5\n");
    }
    
    // Exemplo de Laços de Repetição (for, while, do-while)
    printf("Contagem com for: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("Contagem com while: ");
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    printf("Contagem com do-while: ");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i < 5);
    printf("\n");
    
    // Exemplo de Vetores
    int vetor[3] = {1, 2, 3};
    printf("Primeiro elemento do vetor: %d\n", vetor[0]);
    
    // Exemplo de String
    char nome[20] = "Olá, Mundo!";
    printf("String: %s\n", nome);
    
    // Chamando a função soma()
    int resultado = soma(a, b);
    printf("A soma de %d e %d é: %d\n", a, b, resultado);
    
    return 0;
}
