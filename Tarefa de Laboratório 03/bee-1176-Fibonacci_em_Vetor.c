#include <stdio.h>


int main() {
    int t, n, i, j, aux=2;// começa em 2 pois as posições 0 e 1 são definidas no início
    unsigned long long v[61];
    v[0] = 0;
    v[1] = 1;

    scanf("%d", &t);

    for (i=0; i<t; i++) {
        scanf("%d", &n);

        if (aux<=n) {//verifica se já foi calculado o fibonacci
            for (j=aux; j<=n; j++) //calcula fibonacci
                v[j] = v[j-1] + v[j-2];
            aux = n+1;
        }

        printf("Fib(%d) = %llu\n", n, v[n]);
    }

    return 0;
}
