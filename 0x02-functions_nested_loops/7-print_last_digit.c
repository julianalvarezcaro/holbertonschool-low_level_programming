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

	if (n < 0)
	{
		last_dig = -n % 10;
	}
	else
	{
		last_dig = n % 10;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
