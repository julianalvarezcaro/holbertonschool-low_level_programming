#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals from a matrix
  *
  * @a: square matrix
  * @size: size matrix
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int diag;
	//int *ptr = a;
	int suma = 0;

	for (diag = 0; diag < size * size; diag = diag + size + 1)
	{
		suma += a[diag];
	}
	printf("%d, ", suma);
	suma = 0;
	for (diag = size - 1; diag <= (size * size) - size; diag = diag + size - 1)
	{
		suma += a[diag];
	}
	printf("%d\n", suma);
}
