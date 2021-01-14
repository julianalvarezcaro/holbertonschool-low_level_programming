#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include "stdio.h"
#include "math.h"

/* Main functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

/* Auxiliar functions */
void print_array(int *array, size_t l, size_t r);
int min(int a, int b);

#endif /* SEARCH_ALGOS_H */
