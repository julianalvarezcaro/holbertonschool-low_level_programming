#include "holberton.h"

/**
  * factorial - return the factorial of a number recursively
  *
  * @n: int to get the factorial of
  *
  * Return: result of the factorial
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
