#include <math.h>
#include <stdio.h>

void main(void) {
    float x = 0, xi1 = -0.25, h = 0.25, xi2 = 0.25;

    // printf ("Derivada progressiva");
    float fxi1 = 0, fxi2 = 0, fx = 0, resultado;
    float derivada = 0;
    
    fxi1 = pow(xi1, 3) + 4 * xi1 - 15;
    fxi2 = pow(xi2, 3) + 4 * xi2 - 15;
    fx = pow(x, 3) + 4 * x - 15;
    derivada = 3 * pow(x, 2) + 4;
    resultado = (fxi2 - fx) / h;
    float erro = 0;
    erro = (derivada - resultado) / derivada;
    if (erro < 0) {
        erro = erro * -1;
    }
    printf("\n======DERIVADA REGRESSIVA=====\n");
    float resultado2 = (fx - fxi1) / h;
    float erro_regressiva = (derivada - resultado2) / derivada;
    if (erro_regressiva < 0) {
        erro_regressiva = erro_regressiva * -1;
    }
    printf("derivada regressiva: %2.4f\nErro: %2.4f", resultado2, erro_regressiva);
    printf("\n======DERIVADA CENTRAL=======\n");
    float resultado3 = (fxi2 - fxi1) / (2 * h);
    float erro_central = (derivada - resultado3) / derivada;
    if (erro_central < 0) {
        erro_central = erro_central * -1;
    }
    printf("Derivada Central: %2.4f\nErro: %2.4f", resultado3, erro_central);
    
    printf("\n=====DERIVADA PROGRESSIVA\n");
    printf("Derivada Progressiva: %2.4f\nErro: %2.4f", resultado, erro);
}
