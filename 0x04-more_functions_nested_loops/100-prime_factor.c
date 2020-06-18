#include <stdio.h>

/**
  *
  *
  *
  *
  */
int main(void)
{
	long int number = 612852475143;
	long mod;

	for (mod=2; mod <= number; mod++)
	{
		if (number % mod == 0)
		{
		number /= mod;
		}
	}
	printf("%ld\n", mod);
	return(0);
}
