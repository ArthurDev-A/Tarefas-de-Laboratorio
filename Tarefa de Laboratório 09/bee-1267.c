#include <stdio.h>

#define MAX 100

short int _1_in(int *v, int t) {
    int i;
    for (i=0; i<t; i++) {
        if (v[i]) return 1;
    }
    return 0;
}

int main() {
    int n, d, x[MAX], aux, i, j;
    scanf("%d %d", &n, &d);

    while (n) {
        for (i=0; i<n; i++)
                x[i] = 1;
        for (j=0; j<d; j++) {
            for (i=0; i<n; i++) {
                scanf("%d", &aux);
                if (x[i])
                    x[i] = aux;
            }
        }
        printf((_1_in(x, n)) ? "yes\n" : "no\n");
        scanf("%d %d", &n, &d);
    }

    return 0;
}
