#include <stdio.h>

short int eh_bissexto(int ano) {
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) return 1;
            return 0;
        }
        return 1;
    }
    return 0;

}

int main() {
    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);

    printf(eh_bissexto(ano) ? "Eh bissexto\n" : "Nao eh bissexto\n");

    return 0;
}
