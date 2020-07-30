#include "holberton.h"

/**
  * print_binary - prints the binary representation of a number
  *
  * @n: number to be printed in binary
  *
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int aux = n;
	int count = 0;

	if (n == 0)
		_putchar('0');
	while (aux > 0)
	{
		aux = aux >> 1;
		count++;
	}

	for (count--; count >= 0; count--)
	{
		if (1 & (n >> count)) /*True en caso de ser diferente de 0, o sea, 1*/
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
