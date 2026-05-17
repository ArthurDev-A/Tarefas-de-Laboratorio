#include <stdio.h>


int main() {
    int t, n, i, j, aux=2; /* Comeca em 2, pois as posicoes 0 e 1 são definidas no inicio */
    unsigned long long int v[61]; /* Em C ANSI: unsigned long int*/
    v[0] = 0;
    v[1] = 1;

    scanf("%d", &t);

    for (i=0; i<t; i++) {
        scanf("%d", &n);

        if (aux<=n) { /* Verifica se já foi calculado o fibonacci */
            for (j=aux; j<=n; j++) /* Calcula fibonacci */
                v[j] = v[j-1] + v[j-2];
            aux = n+1;
        }

        printf("Fib(%d) = %llu\n", n, v[n]); /* Em C ANSI: %lu */
    }

    return 0;
}
