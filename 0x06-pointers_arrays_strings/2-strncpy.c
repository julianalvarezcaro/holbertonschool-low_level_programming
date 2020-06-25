#include "holberton.h"

/**
  * _strncpy - copies an string
  *
  * @dest: where the string will be copied to
  * @src: string
  * @n: number of characters to be copied
  *
  * Return: pointer to the string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int chsrc = 0;
	int chdest = 0;

	while (n > 0)
	{
		if (src[chsrc] != '\0')
		{
			dest[chdest] = src[chsrc];
			chdest++;
			chsrc++;
			n--;
		}
		else if (src[chsrc] == '\0')
		{
			dest[chdest] = '\0';
			chdest++;
			n--;
		}
	}
	return (dest);
}
