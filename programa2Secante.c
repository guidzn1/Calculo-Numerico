//Guilherme Lima Torres

#include <stdio.h>
#include <math.h>

float f(float x) {
    return pow(x, 3) + 3 * pow(x, 2) - 1;
}

int main() {
    float erro, x0, xi, tam, pm, pm2, it;
    it = 0;

    erro = 0.0001;
    x0 = 0;
    xi = -4;

    tam = fabs((xi - x0) / xi);
    pm = f(x0);
    pm2 = f(xi);
    printf(" x0         xi         f(x0)         f(xi)\n");
    printf("-----------------------------------------------\n");

    while (tam >= erro) { // enquanto o intervalo for maior ou igual ao erro, continua iterando
        printf("%.6f   %.6f   %.6f    %.6f\n", x0, xi, pm, pm2);

        float f_xi = f(xi);
        float f_x0 = f(x0);
        pm = xi - (f_xi * (xi - x0)) / (f_xi - f_x0); // cálculo do próximo ponto xi usando o método da secante

        x0 = xi;
        xi = pm; // atualiza x0 e xi para a próxima iteração

        tam = fabs((xi - x0) / xi); // atualiza o tamanho do intervalo

        pm2 = f(xi);

        it++;
    }

    printf("\nA raiz aproximada e: %.6f\n", xi);

    return 0;
}
