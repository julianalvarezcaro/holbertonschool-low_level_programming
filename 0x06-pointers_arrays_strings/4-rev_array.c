#include "holberton.h"

/**
  * reverse_array - reverses an array
  *
  * @a: array
  * @n: size of a
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int tmp;
	int ai = 0;

	while (ai < n)
	{
		tmp = *(a + ai);
		*(a + ai) = *(a + (n - 1));
		*(a + (n - 1)) = tmp;
		ai++;
		n--;
	}
}
