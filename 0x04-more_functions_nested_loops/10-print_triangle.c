#include "holberton.h"

/**
  * print_triangle - prints triangles
  *
  * @size: the size of the triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int lines;
	int spaces;
	int hash;

	if (size > 0)
	{
	for (lines = 0; lines < size; lines++)
	{
		for (spaces = size - 1; spaces > lines; spaces--)
		{
			_putchar(' ');
		}
		for (hash = size - lines; hash <= size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
