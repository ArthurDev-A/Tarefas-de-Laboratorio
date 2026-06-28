#include <stdio.h>

#define MAX 4

short int casa_valida(int n) {
    int x[MAX], t=0, i;
    while (n) {
        x[t++] = n%10;
        n/=10;
    }
    
    while (t--)
        for (i=0; i<t; i++)
            if (x[i] == x[t]) return 0;
    return 1;
}

int main() {
    int n, m, acc;
    
    while (scanf("%d %d", &n, &m) == 2) {
        acc = 0;
        while (n<=m)
            acc += casa_valida(n++);
        printf("%d\n", acc);
    }

    return 0;
}
