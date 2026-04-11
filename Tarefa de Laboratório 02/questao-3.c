#include <stdio.h>

int fat4(int n) {
    if (n==0) return 1;
    return (4*n-2) * fat4(n-1);
}

int main() {
    int n;
    
    printf("CALCULADORA DE FATORIAL QUADRUPLO\n\n");
    
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("%d\n", (int) fat4(n));


    return 0;
}