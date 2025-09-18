#include <stdio.h>

// Função para ordernar usando bubble Sort
void bubbleSort (int vetor[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {

                // Troca os elementos
                temp = vetor [j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    // Exemplo de entrada
        int vetor[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(vetor)/sizeof(vetor[0]);

    printf("Vetor original: ");
    for (int i =0; i < n; i++) {
        printf("%d", vetor[i]);
    }

     // Chamando a função de ordenação
     bubbleSort(vetor, n);

     printf("\nVetor ordenado (crescente): ");
     for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
     }
     
     return 0;

}     