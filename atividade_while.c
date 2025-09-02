#include <stdio.h>
int main(){
float numero;
float soma = 0;
int total = 0;

printf("Digite numeros reais maiores que o 0 (0 encerra):\n");

scanf("%f", &numero);

while (numero != 0) {
    if(numero > 0)  {
        soma += numero;
        total++;
    }
    scanf("%f, &numero");
}

if (total == 0) {
    printf("Nao foi entrado nenhum numero\n");
} else {
    printf("Quantidade de numeros: %d\n", total);
    printf("Media: %.2f\n", soma / total);
}

return 0;

}