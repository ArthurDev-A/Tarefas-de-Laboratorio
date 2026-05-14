#include <stdio.h>
#define PI 3.1415

int main() {
    float l, Pq, Aq, Ac;

    printf("Insira o valor do lado do quadrado: ");
    scanf("%f", &l);

    Pq = 4*l;
    Aq = l*l;
    Ac = PI*(l/2)*(l/2);

    printf("Perimetro do quadrado: %f\n", Pq);
    printf("Area do quadrado: %f\n", Aq);
    printf("Area do circulo: %f\n", Ac);

    return 0;
}
