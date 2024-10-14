#include <stdio.h>

#include "cordas.h"

int main(void) {
    cordas_t sample = Cordas_create("Hello World!");

    printf("Str: %s | Len: %d\n", sample.data, sample.length);

    return 0;
}