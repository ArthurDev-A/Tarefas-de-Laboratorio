#include <stdio.h>

double pot2(int n) {
    if (n<0) return 1./pot2(-n);
    if (n == 0) return 1.;
    return (double) 2.*pot2(n-1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%f\n", pot2(n));

    return 0;
}