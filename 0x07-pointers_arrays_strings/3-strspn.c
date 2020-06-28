#include "holberton.h"

/**
  * _strspn - gets lenght of a prefix substring
  *
  * @s: string
  * @accept: characters to check on s
  *
  * Return: Number of charactes of s are accept characters
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *acep;

	while (*s != '\0')
	{
		acep = accept;
		while (*acep != '\0')
		{
			if (*s == *acep)
			{
				n++;
				break;
			}
			acep++;
		}
		if (*acep == '\0')
			break;
		s++;
	}
	return (n);
}
