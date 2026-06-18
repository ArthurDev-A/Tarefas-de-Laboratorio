#include <stdio.h>

short int n_in_vector(int n, int *v, int t) {
    int i;
    for (i=0; i<t; i++)
        if (v[i] == n) return 1;
    return 0;
}

short int eh_possivel(int n, int *B, int t, int max) {
    int a, b;
    for (a=0; a<=max; a++) {
        b=n+a;
        if (b<=max) {
            if (n_in_vector(a, B, t) && n_in_vector(b, B, t))
                return 1;
        } else return 0;
    }
    return 0;
}

int main() {
    int i, n=1, b, B[91];
    short int aux;

    scanf("%d %d", &n, &b);
    while(n) {
        for (i=0; i<b; i++)
            scanf("%d", &B[i]);

        for (i=1, aux=1; i<=n && aux; i++) {
            aux = eh_possivel(i, B, b, n);
        }

        printf("%c\n", (aux) ? 'Y' : 'N');
        scanf("%d %d", &n, &b);
    }
    return 0;
}
