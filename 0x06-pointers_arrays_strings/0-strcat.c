#include "holberton.h"

/**
  * _strcat - concatenates 2 string
  *
  * @dest: pointer to string
  * @src: pointer to string
  *
  * Return: Pointer to resultin string
  */
char *_strcat(char *dest, char *src)
{
	int lenDest;

	for (lenDest = 0; dest[lenDest] != '\0'; lenDest++)
	{
	}
	while (*src != '\0')
	{
		dest[lenDest] = *src;
		lenDest++;
		src++;
	}
	dest[lenDest] = '\0';
	return (dest);
}
