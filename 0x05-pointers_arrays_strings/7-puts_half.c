#include "holberton.h"

/**
  * puts_half - prints half of a string
  *
  * @str: pointer to the string to be printed
  *
  * Return: void
  */
void puts_half(char *str)
{
	int len;
	int half;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len == 0)
	{
	}
	else if (len % 2 == 0)
	{
		for (half = len / 2; half < len; half++)
			_putchar(str[half]);
	}
	else
	{
		for (half = (len - 1) / 2; half < len; half++)
			_putchar(str[half]);
	}
	_putchar('\n');
}
