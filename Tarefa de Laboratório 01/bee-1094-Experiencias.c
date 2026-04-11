// https://judge.beecrowd.com/pt/problems/view/1094

#include <stdio.h>

int main()
{
    int n, qtd=0, qtdTotal=0, qtdC=0, qtdR=0, qtdS=0;
    char tipo;
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%d %c", &qtd, &tipo);
        qtdTotal += qtd;
        
        switch (tipo) {
            case 'C':
                qtdC+=qtd;
                break;
                
            case 'R':
                qtdR+=qtd;
                break;
                
            case 'S':
                qtdS+=qtd;
                break;
                
        }
    }
    
    printf("Total: %d cobaias\n", qtdTotal);
    printf("Total de coelhos: %d\n", qtdC);
    printf("Total de ratos: %d\n", qtdR);
    printf("Total de sapos: %d\n", qtdS);
    printf("Percentual de coelhos: %.2f %\n", (float) qtdC/qtdTotal*100);
    printf("Percentual de ratos: %.2f %\n", (float) qtdR/qtdTotal*100);
    printf("Percentual de sapos: %.2f %\n", (float) qtdS/qtdTotal*100);

    return 0;
}
