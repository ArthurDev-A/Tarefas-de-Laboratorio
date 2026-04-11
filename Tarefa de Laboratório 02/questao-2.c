#include <stdio.h>

int fat2(int n) {
    if (n%2==0) return fat2(n-1);
    if (n==1) return 1;
    return n*fat2(n-2);
}

int main() {
    int n;
    
    printf("CALCULADORA DE FATORIAL DUPLO\n\n");
    
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("%d\n", fat2(n));


    return 0;
}