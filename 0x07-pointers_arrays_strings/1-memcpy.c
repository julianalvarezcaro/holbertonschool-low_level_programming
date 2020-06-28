#include "holberton.h"

/**
  * _memcpy - copies memory area
  *
  * @dest: where the string will be copied
  * @src: string to be copied
  * @n: number of characters to be copied
  *
  * Return: pointer to the string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (ptr);
}
