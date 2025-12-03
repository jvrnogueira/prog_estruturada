#include <stdio.h>
 
int main() {
 
    int D;  
    int T; 
 
    printf("distancia");
    scanf("%d", &D);
 
    // Cálculo do tempo em minutos
    // O tempo é dado por (Distância * 60 minutos) / Velocidade Relativa (150 km/h)
    T = (D * 60) / 150;
 
    // Impressão no formato padrão para este tipo de problema (X minutos)
    printf("%d minutos\n", T);
 
    return 0;
}