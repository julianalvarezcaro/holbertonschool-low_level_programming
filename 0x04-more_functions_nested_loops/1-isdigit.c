#include "holberton.h"

/**
 * _isdigit - will tell if the argument is a digit
 *
 * @c: number to be checked if is a digit
 *
 * Return: 1 if a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
