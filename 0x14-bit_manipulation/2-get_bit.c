#include "holberton.h"

/**
  * get_bit - gets a bit at a given index
  *
  * @n: decimal number
  * @index: index
  *
  * Return: Value of the bit. -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	unsigned int aux = n;

	if (index > 63)
	{
		return (-1);
	}
	len = 0;
	while (aux > 0)
	{
		aux = aux >> 1;
		len++;
	}
	len--; /*Porque los indices se cuentan desde 0*/
	return (((n >> index) & 1));
}
