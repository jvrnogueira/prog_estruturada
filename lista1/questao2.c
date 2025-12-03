#include <stdio.h>
 
int main() {
 
    int km;       
    double gasolina;    
    double consumo;
 
    printf("distancia total percorrida");
    scanf("%d", &km);
    printf("gasolinas gasta");
    scanf("%lf", &gasolina);
 
    consumo = km / gasolina;
 
    printf("%.3lf km/l\n", consumo);
 
    return 0;
}