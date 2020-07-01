#include "holberton.h"

/**
  * _pow_recursion - return a number to the power of another
  *
  * @x: int to be raised
  * @y: power
  *
  * Return: result of the power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
