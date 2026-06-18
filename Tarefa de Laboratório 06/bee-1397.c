#include <stdio.h>

int main() {
    int n, j1, j2, p1, p2;
    scanf("%d", &n);
    
    while (n) {
        p1 = p2 = 0;
        while (n--) {
            scanf("%d %d", &j1, &j2);
            if (j1 > j2)
                p1++;
            else if (j2 > j1)
                p2++;
        }
        
        printf("%d %d\n", p1, p2);
        
        scanf("%d", &n);
    }
    
    return 0;
}
