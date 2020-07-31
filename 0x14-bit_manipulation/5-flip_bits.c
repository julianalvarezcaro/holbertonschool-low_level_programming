#include "holberton.h"

/**
  * flip_bits - Return the number of bits that two numbers have different
  *
  * @n: one of the numbers
  * @m: one of the numbers
  *
  * Return: Number of bits different
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
		{
			bits++;
		}
		xor = xor >> 1;
	}
	return (bits);
}
