#include <stdio.h>

int fat(int n) {
    if (n == 0) return 1;
    return n * fat(n - 1);
}

int fs(int n) {
    if (n == 0) return 1;
    return fat(n) * fs(n-1);
}

int main() {
    int n;
    
    printf("CALCULADORA DE SUPERFATORIAL\n\n");
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n%d", fs(n));
}