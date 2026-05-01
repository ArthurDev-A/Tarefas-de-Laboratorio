#include <stdio.h>

int LendaFlaJo(int n, int k) {
    if (n == 1) return 0;
    return (LendaFlaJo(n-1, k)+k)%n;
}

int main() {
    int nc, i, n, k;
    scanf("%d", &nc);

    for (i=1; i<=nc; i++){
        scanf("%d %d", &n, &k); 
        printf("Case %d: %d\n", i, LendaFlaJo(n, k)+1);
    }
}
