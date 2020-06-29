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

	for (diag = 0; diag < size; diag++)
	{
		//suma += (*(a + diag) + diag);
		printf("%d, ", *(*(a + diag) + diag));
		//a++;
	}
	printf("%d, ", suma);
	suma = 0;
	//ptr = a;
	for (diag = size - 1; diag >= 0; diag--)
	{
		//suma += (*ptr)[diag];
		a++;
	}
	printf("%d\n", suma);
}
