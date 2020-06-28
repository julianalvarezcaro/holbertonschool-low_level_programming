#include "holberton.h"

/**
  * _strpbrk - finds first ocurrence of char from accept in s
  *
  * @s: string
  * @accept: characters to check on s
  *
  * Return: Pointer to the first ocurrence
  */
char *_strpbrk(char *s, char *accept)
{
	char *acep;

	while (*s != '\0')
	{
		acep = accept;
		while (*acep != '\0')
		{
			if (*s == *acep)
			{
				return (s);
			}
			acep++;
		}
		s++;
	}
	return (0);
}
