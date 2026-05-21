#include <stdio.h>
#define QTD_CONEXOES 5

int eh_compativel(int c1[QTD_CONEXOES], int c2[QTD_CONEXOES]) {
    int i;
    for (i=0; i<QTD_CONEXOES; i++)
        if (c1[i] == c2[i]) return 0;
    return 1;
}

int main() {
    int c[2][QTD_CONEXOES], aux, i, j;

    for (i=0; i<2; i++)
        for (j=0; j<QTD_CONEXOES; j++) {
            scanf("%d", &aux);
            c[i][j] = aux;
        }
    printf((eh_compativel(c[0], c[1])) ? "Y\n" : "N\n");

    return 0;
}
