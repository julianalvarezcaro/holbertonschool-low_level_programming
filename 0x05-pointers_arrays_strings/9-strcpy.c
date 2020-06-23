#include "holberton.h"

/**
  * _strcpy - copies the string pointed by scr
  *
  * @dest: destination of the copy
  * @src: source to be copied
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int len;
	char *puntero = dest;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = src[len];
	return (puntero);
}
