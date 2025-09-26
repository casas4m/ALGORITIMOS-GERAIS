#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor, pares = 0, impares = 0, soma = 0;
    int x, encontrado = 0;

    // Leitura dos 10 números
    printf("Digite 20 numeros inteiro:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Exibir os números digitados
    printf("\nNumeros digitados: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Inicializar maior e menor
    maior = numeros[0];
    menor = numeros[0];

    // Calcular maior, menor, pares, ímpares e soma
    for(i = 0; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
        if(numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        soma += numeros[i];
    }

    // Mostrar resultadpos
    printf("\nMaior numero; %d", maior);
    printf("Menor numero: %d\n", menor);
    printf("Quantidade de numeros pares; %d/n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Media aritmetica; %.2f\n", soma / 10.0);

    // Verificar se X existe no vetor
    printf("\nDigite um numero X para procurar no vetor: ");
    scanf("%d", &x);

    for(i = 0; i < 10; i++) {
        if(numeros[i] == x) {
            printf("0 numero %d foi encotrado na posicao (indice) %d.\n", x, i);
            encontrado = 1;
            break; // se quiser todas as posições, tire o  break
        }
    }

    if(!encontrado) {
        printf("O numero %d nao foi encontrado no vetor.\n", x);
    }

    return 0;
} 