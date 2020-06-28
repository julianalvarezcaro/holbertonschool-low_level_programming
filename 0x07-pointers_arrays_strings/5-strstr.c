#include "holberton.h"

/**
  * _strstr - finds first ocurrence of needle in s
  *
  * @s: string
  * @accept: string to be found
  *
  * Return: Pointer to the first ocurrence
  */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *need = needle;

	while (*haystack != '\0' && *need != '\0')
	{
		if (*haystack == *need)
		{
			haystack++;
			need++;
		}
		else
		{
			need = needle;
			haystack++;
			hay++;
		}
	}
	if (*need == '\0')
	{
		return (hay);
	}
	else
		return (0);
}
