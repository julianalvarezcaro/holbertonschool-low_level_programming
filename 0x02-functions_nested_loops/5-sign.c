#include "holberton.h"

/**
 * print_sign - prints the sign of the given number
 *
 * @n: number to print the sign of
 *
 * Return: 1 if possitive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
