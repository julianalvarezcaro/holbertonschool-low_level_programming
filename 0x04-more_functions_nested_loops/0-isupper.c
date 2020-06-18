#include "holberton.h"

/**
 * _isupper - will tell if the argument is uppercase
 *
 * @c: number to be checked if is uppercase
 *
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
