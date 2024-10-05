# 🧶 cordas.h

Implementing string manipulation in C.

## 💿 API

```c
cordas_t Cordas_create(char *str);
cordas_t Cordas_concat(cordas_t str1, cordas_t str2);
cordas_t Cordas_replace(cordas_t target, cordas_t old, cordas_t _new);
cordas_t Cordas_trimleft(cordas_t str);
cordas_t Cordas_trimright(cordas_t str);
int Cordas_count(cordas_t str);
int Cordas_startswith(cordas_t target, cordas_t match);
int Cordas_endswith(cordas_t target, cordas_t match);
```