#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints every natural number from n to 98
 *
 * @n: number given to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int number = n;

	if (n < 98)
	{
		while (number < 98)
		{
			printf("%d, ", number);
			number++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (number > 98)
		{
			printf("%d, ", number);
			number--;
		}
		printf("98\n");
	}
	else
		printf("98\n");
}
