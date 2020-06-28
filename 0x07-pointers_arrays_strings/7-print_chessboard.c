#include "holberton.h"

/**
  * print_chessboard - will print a chessboard
  *
  * @a: Array of arrays
  *
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int colum;
	int filas;

	for (filas = 0; filas < 8; filas++)
	{
		for (colum = 0; colum < 8; colum++)
		{
			_putchar((*a)[colum]);
		}
		_putchar('\n');
		a++;
	}
}
