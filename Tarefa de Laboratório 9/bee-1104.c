#include <stdio.h>

#define MAX 10000

short int nao_busca_binaria(int *v, int t, int k) {
    int m,
        i=0,
        f = t-1;

    while (i<=f) {
        m = (i+f)/2;
        if (k == v[m])
            return 0;
        else if (k < v[m])
            f = m-1;
        else
            i = m+1;
    }
    return 1;
}

int main() {
    int a, b, A[MAX], B[MAX], doaA[MAX], dA=0, doaB[MAX], dB=0, i;

    scanf("%d %d", &a, &b);

    while (a) {

        for (i=0; i<a; i++)
            scanf("%d", &A[i]);
        for (i=0; i<b; i++)
            scanf("%d", &B[i]);

        for (i=0; i<a; i++)
            if (nao_busca_binaria(doaA, dA, A[i]) && nao_busca_binaria(B, b, A[i]))
                doaA[dA++] = A[i];

        for (i=0; i<b; i++)
            if (nao_busca_binaria(doaB, dB, B[i]) && nao_busca_binaria(A, a, B[i]))
                doaB[dB++] = B[i];

        printf("%d\n", (dA < dB) ? dA : dB);
        dA = dB = 0;
        scanf("%d %d", &a, &b);
    }

    return 0;
}
