#include "holberton.h"

/**
  * print_square - prints a square of #
  *
  * @size: size of the square
  *
  * Return: void
  */
void print_square(int size)
{
	int width;
	int height;

	if (size > 0)
	{
	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
