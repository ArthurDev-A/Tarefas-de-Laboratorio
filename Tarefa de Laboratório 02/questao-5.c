#include <stdio.h>

int elevar(int b, int e) {
    if (e == 0) return 1;
    return b * elevar(b, e-1);
}

int h(int n) {
    if (n == 0) return 1;
    return elevar(n, n) * h(n-1);
}

int main() {
    int n;
    
    printf("CALCULADORA DE HIPERFATORIAL\n\n");
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n%d", h(n));
}