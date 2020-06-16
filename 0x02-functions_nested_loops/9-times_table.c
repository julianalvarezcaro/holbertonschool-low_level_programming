#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int filas;
	int colum;
	int mult;
	int print1;
	int print2;

	for (filas = 0; filas < 10; filas++)
	{
		for (colum = 0; colum < 10; colum++)
		{
			mult = filas * colum;
			print1 = (mult / 10) % 10;
			print2 = mult % 10;
			if (print1 != 0)
			_putchar(print1 + '0');
			else if (colum != 0)
			_putchar(' ');
			_putchar(print2 + '0');

			if (colum != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
