#include "holberton.h"

/**
* print_line - prints a stright line of n number of _
*
* @n: number of times _ is printed
*
* Return: void
*/
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
