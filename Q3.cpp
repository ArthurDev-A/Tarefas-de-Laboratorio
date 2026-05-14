/* gcc -std=c89 -pedantic-errors -Wall -Wextra arquivo.c -o programa */
#include <stdio.h>
#include <limits.h>

unsigned long int mmc(unsigned int n, unsigned int m) {
    return n*m;
}

int main() {
    unsigned int n, m;

    printf("Insira dois numeros inteiros positivos separados por espaco: ");
    scanf("%u %u", &n, &m);

    printf("O MMC entre %u e %u eh %lu", n, m, mmc(n, m));
    //printf("%lu", (unsigned long int) n + m);
    return 0;
}
