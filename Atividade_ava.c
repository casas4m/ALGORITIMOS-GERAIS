#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%d", &a);
    
    printf("Digite o valor do lado B: ");
    scanf("%d", &b);

    printf("Digite o valor do lado C: ");
    scanf("%d, &c");

    // verificação da condição da existência do triângulo
    if (a < b + c && b < a + c && c < a + b){
        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || a == c || b == c){
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        } 
    } else {
        printf("Nao e um triangulo\n");
    }
    return 0;
}