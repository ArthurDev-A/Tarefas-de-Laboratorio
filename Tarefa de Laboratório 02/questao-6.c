#include <stdio.h>

int elevar(int b, int e) {
    if (e == 0) return 1;
    return b * elevar(b, e-1);
}

int fat_exp(int n) {
    if (n == 1) return 1;
    return elevar(n, fat_exp(n-1));
}

int main() {
    int n;
    
    printf("CALCULADORA DE FATORIAL EXPONENCIAL\n\n");
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n%d", fat_exp(n));
}