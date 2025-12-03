#include <stdio.h>

int main() {

    int M, N;
    int i, soma, menor, maior;

    // Loop infinito que só para via 'break'
    while (1) {
        
        printf("informe os pares");
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        }

        if (M < N) {
            menor = M;
            maior = N;
        } else {
            menor = N;
            maior = M;
        }

        soma = 0;

        for (i = menor; i <= maior; i++) {
            printf("%d ", i); 
            soma += i;        
        }

        printf("Sum=%d\n", soma);
    }

    return 0;
}