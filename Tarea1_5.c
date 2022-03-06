//Roberto Castro Barrios. A01748559
#include <stdio.h>

double serieLeibniz(double iterations) {
    double signo = 1;
    double denominador = 1;
    double pi = 0;
    for (int i = 0; i < iterations; i++) {
        pi += signo * (4/denominador);
        signo *= -1;
        denominador += 2;
    }
    return pi;
}

void main() {
    printf("La serie de Leibniz con 1000 iteraciones: %f \n",serieLeibniz(1000));
    printf("La serie de Leibniz con 10000 iteraciones: %f \n",serieLeibniz(10000));
    printf("La serie de Leibniz con 1000000 iteraciones: %f \n",serieLeibniz(1000000));    
    return 0;
}