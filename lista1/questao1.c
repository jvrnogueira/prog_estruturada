#include <stdio.h>
 
int main() {
 
    double A, B, MEDIA;
 
    printf("primeiro numero");
    scanf("%lf", &A);
    printf("segundo número");
    scanf("%lf", &B);
 
    // Cálculo da média ponderada
    // Pesos: 3.5 e 7.5 -> Soma dos pesos = 11.0
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11.0;
 
    // Impressão formatada com 5 casas decimais
    // O \n no final é essencial para o juiz online aceitar a resposta
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}