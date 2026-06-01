/*
    cadeia.c

    Created by Arthur de Araujo Custodio on 31/05/2026.
    Copyright © 2026 Arthur de Araujo Custodio. All rights reserved.
*/

#include "cadeia.h"
#include "defines.h"

int str_tamanho(char *s) {
    int i = 0;

    while (s[i] != '\0' && i<TAMANHO_S)
        i++;

    if (i >= TAMANHO_S)
        return -1;

    return i;
}

void str_copia(char *s, char *d) {
    int i=0;

    if (str_tamanho(s) != -1)
        while ((d[i] = s[i]) != '\0')
            i++;
}

void str_concatena(char *s, char *d) {
    int i, j = 0;

    if ((i = str_tamanho(d)) != -1) {
        if ((str_tamanho(s)) != -1){
            j = 0;
            while ((d[i] = s[j]) != '\0') {
                i++;
                j++;
            }
        }
    }
}
