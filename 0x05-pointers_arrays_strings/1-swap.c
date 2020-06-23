#include "holberton.h"

/**
  * swap_int - swaps the value of two ints
  *
  * @a: int to be swapped
  * @b: int to be swapped
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
