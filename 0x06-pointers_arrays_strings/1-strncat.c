#include "holberton.h"

/**
  * _strncat - concatenates 2 string
  *
  * @dest: string
  * @src: string
  * @n: int
  *
  * Return: Pointer to the string
  */
char *_strncat(char *dest, char *src, int n)
{
	int lenDest;

	for (lenDest = 0; dest[lenDest] != '\0'; lenDest++)
	{
	}
	while (*src != '\0' && n > 0)
	{
		dest[lenDest] = *src;
		lenDest++;
		src++;
		n--;
	}
	return (dest);
}
