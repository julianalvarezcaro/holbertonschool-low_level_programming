#include "holberton.h"

/**
  * set_bit - sets a bit at an index to 1
  *
  * @n: pointer to the number
  * @index: index where the bit must be set to 1
  *
  * Return: 1 if works. -1 upon any error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int loop;
	unsigned long int pow;

	if (index > 63)
		return (-1);
	pow = 1;
	for (loop = 0; loop < index; loop++)
	{
		pow *= 2;
	}
	*n = *n & ~(pow);
	return (1);
}
