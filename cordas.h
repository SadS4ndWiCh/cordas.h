#ifndef __CORDAS_H
#define __CORDAS_H

struct cordas {
  char *data;
  unsigned int length;
};

typedef struct cordas cordas_t;

cordas_t Cordas_create(char *str);
cordas_t Cordas_concat(cordas_t str1, cordas_t str2);
cordas_t Cordas_replace(cordas_t target, cordas_t old, cordas_t _new);
cordas_t Cordas_trimleft(cordas_t str);
cordas_t Cordas_trimright(cordas_t str);
int Cordas_count(cordas_t str);
int Cordas_startswith(cordas_t target, cordas_t match);
int Cordas_endswith(cordas_t target, cordas_t match);

#endif