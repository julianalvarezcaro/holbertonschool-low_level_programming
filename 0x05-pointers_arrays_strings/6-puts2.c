#include "holberton.h"

/**
  * puts2 - prints every other character from a string
  *
  * @str: string to print from
  *
  * Return: void
  */
void puts2(char *str)
{
	int len;
	int letter;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (letter = 0; letter < len; letter += 2)
	{
		_putchar(str[letter]);
	}
	_putchar('\n');

}
