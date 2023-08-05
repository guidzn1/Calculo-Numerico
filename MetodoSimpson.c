#include <stdio.h>
#include <math.h>

// Fun��o que representa a fun��o que ser� integrada
float funcao(float x) {
    // f(x) = 6 + 3*cos(x)
    return 6 + 3 * cos(x);
}

// Fun��o que realiza o c�lculo num�rico da integral pelo m�todo de Simpson 1/3
float simpson13(float a, float b) {
    float h = (b - a) / 2;
    float x0 = a;
    float x1 = x0 + h;
    float x2 = x1 + h;
    float I = h / 3;

    I *= (funcao(x0) + 4 * funcao(x1) + funcao(x2));

    return I;
}

int main() {
    float a = 0; // Limite inferior da integral
    float b = 3.14; // Limite superior da integral

    float integral = simpson13(a, b);
    printf("O valor aproximado da integral e: %2.4f\n", integral);

    return 0;
}

