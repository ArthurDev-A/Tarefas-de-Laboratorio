#include <stdio.h>
#define MAIOR_NUMERO 2000

int main() {
    int n, x, qtd[MAIOR_NUMERO], i;
    scanf("%d", &n);
    
    for (i=0; i<MAIOR_NUMERO; i++)
        qtd[i] = 0;

    for (i=0; i<n; i++) {
        scanf("%d", &x);
        qtd[x-1]++;
    }
    
    for (i=0; i<MAIOR_NUMERO; i++)
        if (qtd[i])
            printf("%d aparece %d vez(es)\n", i+1, qtd[i]);
    
    return 0;
}
