#include <stdio.h>
#include <math.h>

#define log10(x) log(x) / log(10)

float f(float x) {
    return pow(x, 3) - x - 1; // Função da questao
}

int main() {
    float erro, a0, b0, tam, pm, it;
    it = 0;

    erro = 0.002;
    a0 = 1;
    b0 = 2;



    it = (log10(b0 - a0)-(log10(erro))/(log(2))); // calcular a iteracao

    tam = (b0 - a0)/b0;
    printf("\nK  a         b         f(k+1)         F(Xk+1)\n");
    printf("------------------------------------\n");

    while (tam > erro) { //emquanto o F(x+1) for maior que o erro ira rodar..
        tam = b0 - a0;  // calculo do F(xK+1)
        pm = (a0 + b0) / 2; // calculo da media do a e b = f(k+1)

        printf("%2d   %.6f   %.6f   %.6f   %.6f\n", (int)it, a0, b0, pm, (f(pm)));



        if (f(a0) * f(pm) < 0)
            b0 = pm; //quando o 
        else
            a0 = pm;

        it++;
    }

   
    return 0;
}

