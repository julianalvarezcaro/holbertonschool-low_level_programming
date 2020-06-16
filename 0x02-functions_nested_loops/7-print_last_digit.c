#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to get the last digit of
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_dig;
	int putvar;

	last_dig = n % 10;
	if (n < 0)
	{
		last_dig = -last_dig;
	}
	putvar = last_dig + 48;
	_putchar(putvar);
	return (last_dig);
}
