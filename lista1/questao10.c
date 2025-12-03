#include <stdio.h>
#include <math.h> // Necessário para sqrt() e pow()

int main() {

    double A, B, C;
    double delta, R1, R2;

    printf("informe os tres coeficientes");
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4 * A * C);

    if (A == 0 || delta < 0) {
        printf("Impossível calcular\n");
    } 
    else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}