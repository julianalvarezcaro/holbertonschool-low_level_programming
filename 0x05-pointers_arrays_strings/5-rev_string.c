#include "holberton.h"

/**
  * rev_string - reverses a string
  *
  * @s: string to be reversed
  *
  * Return: void
  */
void rev_string(char *s)
{
	int len;
	int letteri;
	int letterf;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (letteri = 0, letterf = len - 1; letteri < letterf; letteri++, letterf--)
	{
		tmp = s[letteri];
		s[letteri] = s[letterf];
		s[letterf] = tmp;
	}
}
