#include <stdio.h>
#include <math.h>

float f(float x) {
    return pow(x, 3) - x - 1;
}

float f_derivative(float x) {
    return 3 * pow(x, 2) -1 ; // Derivada da função
}

int main() {
    float erro, x0, xn, tam, pm, it;
    

    erro = 0.0001;

    xn = 1;

    tam = 5;
    pm = xn;
    printf("Iteracao   Xn          f(Xn)\n");
    printf("---------------------------\n");

    while (tam >= erro) {
        printf("%2d         %.6f     %.6f\n", it, xn, f(xn));

        float f_xi = f(xn);
        float f_derivative_xi = f_derivative(xn);

        pm = xn - f_xi / f_derivative_xi; // Cálculo do próximo ponto xi usando o método de Newton-Raphson

        x0 = xn;
        xn = pm; // Atualiza x0 e xi para a próxima iteração

        tam = fabs((xn - x0) / xn); // Atualiza o tamanho do intervalo

        it++;
    }

    printf("\nA raiz aproximada e %.6f\n", xn);

    return 0;
}

