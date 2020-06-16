#include "holberton.h"

/**
 * _abs -computes the absolute value of an int
 *
 * @n: int to get the absolute value of
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
