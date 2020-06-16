#include "holberton.h"

/**
 * _islower - will tell if the argument is lowercase
 *
 * @c: number to be checked if is lowecase
 *
 * Return: 1 if lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
