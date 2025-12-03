#include <stdio.h>

int main() {

    int X, Y, soma = 0;
    int min, max;
    int i;

    printf("informe os valores");
    scanf("%d %d", &X, &Y);

    if (X < Y) {
        min = X;
        max = Y;
    } else {
        min = Y;
        max = X;
    }

    for (i = min + 1; i < max; i++) {
        
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}