#include "holberton.h"

/**
  * strdup - allocates a new space in memory containing a copy of a string
  *
  * @str: string to be copied
  *
  * Return: pointer to the new space in memory
  */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	for(len = 0; str[len] != '\0'; len++)
	{
	}
	len--;
	ptr = (char*) malloc(len * sizeof(char));
	for(; len >= 0; len--)
	{
		ptr[len] = str[len];
	}
	return (ptr);
}
