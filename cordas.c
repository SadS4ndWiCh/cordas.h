#include "cordas.h"

cordas_t Cordas_create(char *str) {
    cordas_t cordas = { .data = str, .length = 1 };
    for (char *ch = str; *ch != 0; ch++, cordas.length++) {}

    return cordas;
}