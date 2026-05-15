#include <stdio.h>

int main() {
    unsigned int n, sum=0, i=1, i_max;
    scanf("%u", &n);
    i_max = n/2;

    while((i<=i_max) && (sum <= n)) {
        if (n%i == 0)
            sum+=i;
        i++;
    }

    printf((sum == n) ? "Eh perfeito\n" : "Nao eh perfeito\n");

    return 0;
}
