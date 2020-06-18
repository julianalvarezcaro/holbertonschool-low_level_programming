#include <stdio.h>

/**
  * main - prints the largest prime factor
  *
  * Return: void
  */
int main(void)
{
	long int number = 612852475143;
	long mod;

	for (mod = 2; mod <= number; mod++)
	{
		if (number % mod == 0)
		{
		number /= mod;
		}
	}
	printf("%ld\n", mod - 1);
	return (0);
}
