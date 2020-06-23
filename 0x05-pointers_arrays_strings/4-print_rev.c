#include "holberton.h"

/**
  * print_rev - prints a string in reverse
  *
  * @s: string to be reversed
  *
  * Return: void
  */
void print_rev(char *s)
{
	int len;
	int letter;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (letter = len - 1; letter >= 0; letter--)
	{
		_putchar(s[letter]);
	}
	_putchar('\n');
}
