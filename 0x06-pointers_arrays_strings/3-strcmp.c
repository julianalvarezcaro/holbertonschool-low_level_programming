#include "holberton.h"

/**
  * _strcmp - compares two strings
  *
  * @s1: string
  * @s2: string
  *
  * Return: Less than 0 if s1<s2. 0 if equal. More than 0 if s1>s2
  */
int _strcmp(char *s1, char *s2)
{
	int lenS1;
	int lenS2;

	for (lenS1 = 0; s1[lenS1] != '\0'; lenS1++)
	{
	}
	for (lenS2 = 0; s2[lenS2] != '\0'; lenS2++)
	{
	}
	if (lenS1 < lenS2)
		return (-15);
	else if (lenS1 > lenS2)
		return (15);
	else
		return (0);
}
