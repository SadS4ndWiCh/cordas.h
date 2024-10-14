#include <stdio.h>

#include "cordas.h"

int main(void) {
    cordas_t sample = Cordas_create("Caio Vinícius Camargo Silva");

    int total_twice_a = Cordas_count(sample, Cordas_create("Caio Vinícius Camargo Silva"));

    printf("Total: %d\n", total_twice_a);

    return 0;
}