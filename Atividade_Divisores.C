#include <stdio.h>

int main() {
    int N;

    //Lê o número de entrada
    scanf("%d", &N);

    //Percorre de 1 até N verificando os divisores
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}