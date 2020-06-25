#include "holberton.h"

/**
  * string_toupper - Changes all lowercase to uppercase
  *
  * @s: pointer to the string
  *
  * Return: pointer to the string
  */
char *string_toupper(char *s)
{
	char ch;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		ch = s[len];
		if (ch >= 97 && ch <= 122)
		{
			ch -= 32;
			s[len] = ch;
		}
	}
	return (s);
}
