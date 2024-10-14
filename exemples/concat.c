#include <stdio.h>

#include "cordas.h"

int main(void) {
    cordas_t first_name = Cordas_create("John");
    cordas_t last_name = Cordas_create("Doe");

    cordas_t full_name = Cordas_concat(first_name, last_name);

    printf("Str: %s | Len: %d\n", full_name.data, full_name.length);

    return 0;
}