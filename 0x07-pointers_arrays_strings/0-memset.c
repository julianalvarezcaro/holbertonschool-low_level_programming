#include "holberton.h"

/**
  * _memset - fill memory area with a constant byte
  *
  * @s: pointer to the area
  * @b: constant byte to fill with
  * @n: times b will be put
  *
  * Return: pointer to the area
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
