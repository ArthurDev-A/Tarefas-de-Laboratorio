/*
    main.c

    Created by Arthur de Araujo Custodio on 31/05/2026.
    Copyright © 2026 Arthur de Araujo Custodio. All rights reserved.
*/

#include <stdio.h>
#include <stdlib.h>
#include "extenso.h"
#include "defines.h"
#define QUANTIDADE 1000


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
            if (i != 1) /* quebra linha entre cada saida de arquivos diferentes */
                printf("\n");
            
            arq = fopen(argv[i], "rt");

            if (arq == NULL) {
                printf("Nao foi possivel abrir o arquivo ");
                for (j=0; argv[i][j] != '\0'; j++) {
                    printf("%c", argv[i][j]);
                }
                printf(".\n");
            }
            else if (ext_n(arq, numextenso)) { /* verifica se foi possível preencher numextenso antes de imprimir */
                for (x=0; x<QUANTIDADE; x++){
                    for (y=0; numextenso[x][y] != '\0'; y++) {
                        printf("%c", numextenso[x][y]);
                    }
                    if (numextenso[x][0]) { /* se numextenso[x] == "" nao imprime nova linha */
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
