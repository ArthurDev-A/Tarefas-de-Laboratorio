#include <stdio.h>
#include <limits.h>

unsigned long int mmc(unsigned int n, unsigned int m) {
    unsigned int maior = (n > m) ? n : m;
    unsigned long int i, i_max = (unsigned long int) n*m;

    for (i=maior; i<i_max; i++)
        if ((i%n == 0) && (i%m == 0))
            return i;
    return i_max;
}

int main() {
    unsigned int n, m;

    printf("Insira dois numeros inteiros positivos separados por espaco: ");
    scanf("%u %u", &n, &m);

    printf("O MMC entre %u e %u eh %lu\n", n, m, mmc(n, m));
    return 0;
}
