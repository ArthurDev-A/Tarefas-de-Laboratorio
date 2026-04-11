#include <stdio.h>

int loc_tetranacci(int n) {
    if ((n == 1) || (n == 2) || (n == 3)) return 0;
    if (n == 4) return 1;
    return loc_tetranacci(n-1)+loc_tetranacci(n-2)+loc_tetranacci(n-3)+loc_tetranacci(n-4);
}

int main() {
    int n;
    
    printf("LOCALIZADOR DE TETRANACCI\n\n");
    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n%d", loc_tetranacci(n));
}