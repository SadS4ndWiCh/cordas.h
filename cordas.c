#include <stdio.h>
#include <stdlib.h>

#include "cordas.h"

cordas_t Cordas_create(char *str) {
    cordas_t cordas = { .data = str, .length = 1 };
    for (char *ch = str; *ch != 0; ch++, cordas.length++) {}

    return cordas;
}

cordas_t Cordas_concat(cordas_t str1, cordas_t str2) {
    cordas_t result;
    result.data = (char *) malloc(str1.length + str2.length - 1);

    for (int i = 0; i < str1.length - 1; i++) result.data[i] = str1.data[i];
    for (int i = 0; i < str2.length - 1; i++) result.data[i + str1.length - 1] = str2.data[i];

    return result;
}

cordas_t Cordas_trimleft(cordas_t str) {
    cordas_t result = { .length = str.length };

    char *ch = str.data;
    for (; *ch != 0 && *ch == ' '; ch++, result.length--) {}

    result.data = (char *) malloc(result.length);
    for (int i = 0; i < result.length - 1; i++) result.data[i] = ch[i];

    return result;
}

cordas_t Cordas_trimright(cordas_t str) {
    cordas_t result = { .length = str.length };

    char *ch = str.data + (result.length - 1);
    for (; (*ch == 0 || *ch == ' ') && (ch - str.data) > 0; ch--, result.length--) {}

    result.data = (char *) malloc(result.length);
    for (int i = 0; i < result.length; i++) result.data[i] = str.data[i];

    return result;
}

int Cordas_count(cordas_t str, cordas_t match) {
    int total = 0;

    for (unsigned int str_i = 0; str_i < str.length; str_i++) {
        if (str_i > str.length - match.length) break;

        for (unsigned int match_i = 0; match_i < match.length; match_i++) {
            if (match_i == match.length - 1) total++;
            if (str.data[str_i + match_i] != match.data[match_i]) break;
        }
    }

    return total;
}