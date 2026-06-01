/*
    main.c

    Created by Arthur de Araujo Custodio on 31/05/2026.
    Copyright © 2026 Arthur de Araujo Custodio. All rights reserved.
*/

#include <stdio.h>
#include <stdlib.h>
#include "cadeia.h"
#include "defines.h"
#define QUANTIDADE 1000


short int n_eh_valido(int n) {
    return ((n >= 1) && (n <= 999));
}

/* converte o numero n (de 1 a 999) para extenso e armazena no vetor de char d */
short int n_ext(int n, char *d) {
    if (n_eh_valido(n)) {
        if (n > 100) {
            switch (n / 100) {
                case 1:
                    str_copia("cento", d);
                    break;
                case 2:
                    str_copia("duzentos", d);
                    break;
                case 3:
                    str_copia("trezentos", d);
                    break;
                case 4:
                    str_copia("quatrocentos", d);
                    break;
                case 5:
                    str_copia("quinhentos", d);
                    break;
                case 6:
                    str_copia("seiscentos", d);
                    break;
                case 7:
                    str_copia("setecentos", d);
                    break;
                case 8:
                    str_copia("oitocentos", d);
                    break;
                case 9:
                    str_copia("novecentos", d);
                    break;
            }
            if (n%100) {
                str_concatena(" e ", d);
            } else {
                return 0;
            }
        }
        else if (n == 100) {
            str_copia("cem", d);
            return 0;
        } else {
            str_copia("", d);
        }
        n%=100;

        if (n >= 20) {
            switch (n / 10) {
                case 2:
                    str_concatena("vinte", d);
                    break;
                case 3:
                    str_concatena("trinta", d);
                    break;
                case 4:
                    str_concatena("quarenta", d);
                    break;
                case 5:
                    str_concatena("cinquenta", d);
                    break;
                case 6:
                    str_concatena("sessenta", d);
                    break;
                case 7:
                    str_concatena("sessenta", d);
                    break;
                case 8:
                    str_concatena("oitenta", d);
                    break;
                case 9:
                    str_concatena("noventa", d);
                    break;
            }
            if (n%10) {
                str_concatena(" e ", d);
                n%=10;
            } else {
                return 0;
            }
        }
        switch (n) {
            case 1:
                str_concatena("um", d);
                break;
            case 2:
                str_concatena("dois", d);
                break;
            case 3:
                str_concatena("tres", d);
                break;
            case 4:
                str_concatena("quatro", d);
                break;
            case 5:
                str_concatena("cinco", d);
                break;
            case 6:
                str_concatena("seis", d);
                break;
            case 7:
                str_concatena("sete", d);
                break;
            case 8:
                str_concatena("oito", d);
                break;
            case 9:
                str_concatena("nove", d);
                break;
            case 10:
                str_concatena("dez", d);
                break;
            case 11:
                str_concatena("onze", d);
                break;
            case 12:
                str_concatena("doze", d);
                break;
            case 13:
                str_concatena("treze", d);
                break;
            case 14:
                str_concatena("quartoze", d);
                break;
            case 15:
                str_concatena("quinze", d);
                break;
            case 16:
                str_concatena("dezesseis", d);
                break;
            case 17:
                str_concatena("dezessete", d);
                break;
            case 18:
                str_concatena("dezoito", d);
                break;
            case 19:
                str_concatena("dezenove", d);
                break;
        }
        return 0;
    }
    return 1;
}


int ext_n(FILE *arq, char (*e_n)[TAMANHO_S]) {
    int n=0, i=0;
    char c, a_c='\0';
    while ((c = fgetc(arq)) != EOF) {
        if ((c >= '0') && (c <= '9')) {
            n *= 10;
            n += c - '0';
        } else if (c == '\n') {
            if (n) {
                if (n_ext(n, e_n[i])) {
                    return -1;
                }
                i++;
            } else if (a_c != '\n') {
                return -1;
            }
            n = 0;
        }
        else {
            return -1;
        }
        a_c = c;
    }
    return 0;
}


int main(int narg, char *argv[]) {
    int n=0, i, j, x, y;
    char numextenso[QUANTIDADE][TAMANHO_S];
    FILE *arq;

    if (narg >= 2) {
        /* define "" para todos os numeros de numextenso */
        for (i=0; i<QUANTIDADE; i++) {
            numextenso[i][0] = '\0';
        }

        for (i=1; i<narg; i++) {
            if (i != 1)
                printf("\n");
            
            arq = fopen(argv[i], "rt");

            if (arq == NULL) {
                printf("Nao foi possivel abrir o arquivo ");
                for (j=0; argv[i][j] != '\0'; j++) {
                    printf("%c", argv[i][j]);
                }
                printf(".\n");
            }
            else if (ext_n(arq, numextenso) != -1) {
                for (x=0; x<QUANTIDADE; x++){
                    for (y=0; numextenso[x][y] != '\0'; y++) {
                        printf("%c", numextenso[x][y]);
                    }
                    if (numextenso[x][0]) {
                        printf("\n");
                    }
                }
                fclose(arq);
            } else {
                printf("O arquivo ");
                for (j=0; argv[i][j] != '\0'; j++) {
                    printf("%c", argv[i][j]);
                }
                printf(" nao eh valido, ah numeros menores que 1 ou maiores que 999, letras ou simbolos.\n");
                fclose(arq);
            }
        }
    } else {
        printf("Insira um numero de 1 a 999: ");
        scanf("%d", &n);

        numextenso[0][0] = '\0';
        
        if (n_ext(n, numextenso[0])) {
            printf("O numero inserido nao eh valido.\n");
            return EXIT_FAILURE;
        }

        for (i=0; numextenso[0][i] != '\0'; i++) {
            printf("%c", numextenso[0][i]);
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
