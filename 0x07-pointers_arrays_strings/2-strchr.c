#include "holberton.h"

/**
  * _strchr - Locates a char in a string
  *
  * @s: string
  * @c: char to be located
  *
  * Return: pointer to the first c ocurrence
  */
char *_strchr(char *s, char c)
{
	char *ptr = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			return (ptr);
		}
		s++;
	}
	return (ptr);
}
