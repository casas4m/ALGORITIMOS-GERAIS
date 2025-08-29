#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int faltas;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a seguda nota: ");
    scanf("%f", &n2);

    printf("Digite  terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    media = (n1 + n2 + n3) / 3.0

    if (media == 0 && faltas <= 18) {
        printf("Menção: SR\n"); 
    }else if (faltas > 18){
        printf("Reprovado por faltas\n");
    } else if( media >= 7 && faltas <= 18) {
        printf("Menção: MS\n");
    }  else if (media >= 5 && faltas <= 18) {
        printf("Menção: MM\n");
    } else if (media >= 3 && faltas <= 18) {
        printf("Menção: MI\n");
    }  else if (media >= 1 && faltas <= 18) {
        printf("Menção II\n");
    }  else {
        printf("Menção:SR (sem rendimento)\n");
    }

    return 0;
}