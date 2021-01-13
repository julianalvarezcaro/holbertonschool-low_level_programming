#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include "stdio.h"

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int *array, size_t l, size_t r);

#endif /* SEARCH_ALGOS_H */
