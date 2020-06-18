#include "holberton.h"

/**
  * print_diagonal - prints a diagonal across the terminal
  *
  * @n: number of lines that it's going to print
  *
  * Return: void
  */
void print_diagonal(int n)
{
	int countLines;
	int countSpaces;

	if (n > 0)
	{
	for (countLines = 0; countLines < n; countLines++)
	{
		for (countSpaces = 0; countSpaces < countLines; countSpaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
