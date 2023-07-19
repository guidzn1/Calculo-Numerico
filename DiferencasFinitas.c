#include <stdio.h>
#include <math.h>

double funcao(double x) {
    return 1 - exp(-2 * x);
}

double derivadaRegressiva(double x, double h) {
    double resultado;
    resultado = (funcao(x) - funcao(x - h)) / h;
    return resultado;
}

double derivadaCentral(double x, double h) {
    double resultado;
    resultado = (funcao(x + h) - funcao(x - h)) / (2 * h);
    return resultado;
}

double derivadaProgressiva(double x, double h) {
    double resultado;
    resultado = (funcao(x + h) - funcao(x)) / h;
    return resultado;
}

int main() {
    double x, h;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    
    printf("Digite o valor de h: ");
    scanf("%lf", &h);
    
    double derivadaReg = derivadaRegressiva(x, h);
    double derivadaCent = derivadaCentral(x, h);
    double derivadaProg = derivadaProgressiva(x, h);
    
    printf("Derivada regressiva: %.4lf\n", derivadaReg);
    printf("Derivada central: %.4lf\n", derivadaCent);
    printf("Derivada progressiva: %.4lf\n", derivadaProg);
    
    return 0;
}

