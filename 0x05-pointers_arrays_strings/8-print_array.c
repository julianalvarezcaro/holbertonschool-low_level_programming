#include "holberton.h"
#include <stdio.h>

/**
  * print_array - prints elements from and array
  *
  * @a: pointer to the array to be printed from
  * @n: number of elements to be printed
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int pos;

	if (n != 0)
	{
		for (pos = 0; pos < n; pos++)
		{
			printf("%d", *(a + pos));
			if (pos != n - 1)
				printf(", ");
		}
		printf("\n");
	}
	else
		printf("\n");
}
