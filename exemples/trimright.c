#include <stdio.h>

#include "cordas.h"

int main(void) {
    cordas_t sample = Cordas_create("Test case       ");

    cordas_t result = Cordas_trimright(sample);

    printf("Str: %s | Len: %d\n", result.data, result.length);

    return 0;
}