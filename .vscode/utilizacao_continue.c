#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Pula o restante do código no loop para i = 5
        }
        printf("%d\n", i);
    }

    return 0;
}
