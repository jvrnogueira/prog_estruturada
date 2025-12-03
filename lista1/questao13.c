#include <stdio.h>

int main() {

    int valor;
    int maior, posicao;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("informe o valor");
        scanf("%d", &valor);

        if (i == 1) {
            maior = valor;
            posicao = 1;
        } 
        else {
            
            if (valor > maior) {
                maior = valor;
                posicao = i; 
            }
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}