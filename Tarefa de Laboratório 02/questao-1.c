#include <stdio.h>

int bin(int n) {
    if (n==0) return 0;
    return n%2 + 10*bin(n/2);
}

int main() {
    int n;
    
    printf("CONVESAO PARA BINARIOS\n\n");
    
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("%d\n", bin(n));


    return 0;
}