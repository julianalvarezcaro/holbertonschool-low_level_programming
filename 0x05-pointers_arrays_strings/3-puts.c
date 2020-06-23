#include "holberton.h"

/**
  * _puts - prints a string
  *
  * @str: pointer to the string to be printed
  *
  * Return: void
  */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
