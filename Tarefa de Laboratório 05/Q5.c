#include <stdio.h>

long int inverte(int n) {
    int p10 = 1, aux = n;
    if (n<0) return -inverte(n);
    if (n<10) return n;

    while(aux>10) {
        p10*=10;
        aux/=10;
    }

    return (n%10) * p10 + inverte(n/10);

}

int main() {
    int n;
    scanf("%d", &n);

    printf("%ld\n", inverte(n));

    return 0;
}
