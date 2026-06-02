/*
    extenso.c

    Created by Arthur de Araujo Custodio on 01/06/2026.
    Copyright © 2026 Arthur de Araujo Custodio. All rights reserved.
*/

#include <stdio.h>
#include "extenso.h"
#include "cadeia.h"
#include "defines.h"

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

/*
    n_e: numeros extensos
    vasculha o arquivo arq e armazena numeros em n_e separados por quebras de linha
    retorna 0 em caso de erro e
    retrona 1 em caso de sucesso
*/
short int ext_n(FILE *arq, char (*n_e)[TAMANHO_S]) {
    int n = 0, i = 0;
    char c, a_c = '\0'; /* a_c armazena o caracter anterior, inicializa com valor default */
    while ((c = fgetc(arq)) != EOF) {
        if ((c >= '0') && (c <= '9')) {
            n *= 10;
            n += c - '0';
        } else if (c == '\n') {
            if (n) {
                if (n_ext(n, n_e[i])) {
                    return 0;
                }
                i++; /* so incrementa se realmente tiver um numero na linha */
            } else if (a_c != '\n') {
                return 0;
            }
            n = 0;
        }
        else {
            return 0;
        }
        a_c = c;
    }
    return 1;
}

