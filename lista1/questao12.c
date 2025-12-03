#include <stdio.h>

int main() {

    int N;
    int i;

    printf("informe o numero");
    scanf("%d", &N);

    for (i = 1; i <= 20; i++) {
        
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}