#include "holberton.h"

/**
  * _sqrt_recursion - gets the natural square root of a number
  *
  * @n: number to get the square root from
  *
  * Return: value of the sqrt
  */
int _sqrt_recursion(int n)
{
	return (sqrt_aux(n, 0));
}

int sqrt_aux(int n, int counter)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else if (counter >= n/2)
		return (-1);
	else if (n != counter * counter)
		return (sqrt_aux(n, counter + 1));
	else if (n == counter * counter)
		return (counter);
	return (-1);
}
