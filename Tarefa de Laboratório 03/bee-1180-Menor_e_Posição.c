#include <stdio.h>

int main() {
    int n, i, menor_i=0, menor_x, x[999];

    scanf("%d", &n);

    for (i=0; i<n; i++)
        scanf("%d", &x[i]);

    menor_x = x[0];

    for (i=1; i<n; i++)
        if (menor_x>x[i]) {
            menor_x = x[i];
            menor_i = i;
        }

    printf("Menor valor: %d\n", menor_x);
    printf("Posicao: %d\n", menor_i);

    return 0;
}
