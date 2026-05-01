#include <stdio.h>

int LendaFlaJo(int n, int k) {
    if (n == 1) return 0;
    return (LendaFlaJo(n-1, k)+k)%n;
}

int main() {
    int n, m;
    scanf("%d", &n);

    while (n) {
        m = 1;
        //(LendaFlaJo(n-1, m)+1)%n considera que o numero 1 foi retirado
        while ((LendaFlaJo(n-1, m)+1)%n != 12) // 12 eh o alvo (13) - 1
            m++;
        
        printf("%d\n", m);
        
        scanf("%d", &n);
    }
    
    return 0;
}
