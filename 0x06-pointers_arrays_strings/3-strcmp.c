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
	unsigned char p1;
	unsigned char p2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	p1 = *s1;
	p2 = *s2;
	return (p1 - p2);
}
