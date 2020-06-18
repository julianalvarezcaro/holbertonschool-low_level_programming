#include "holberton.h"
#include <stdio.h>

/**
  * main - prints 1-100, multiples of 3 Fizz, for 5 Buzz, both FizzBuzz
  *
  * Return: 0 always
  */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz");
		else if (num % 3 != 0 && num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
