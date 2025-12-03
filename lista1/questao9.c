#include <stdio.h>

int main() {

    double salario, novoSalario, reajuste;
    int percentual;

    printf("salario atual");
    scanf("%lf", &salario);

    if (salario < 1500.00) {
        percentual = 20;
    } 
    else if (salario < 5000.00) {
        percentual = 15;
    } 
    else {
        percentual = 10;
    }

    reajuste = salario * (percentual / 100.0); 
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}