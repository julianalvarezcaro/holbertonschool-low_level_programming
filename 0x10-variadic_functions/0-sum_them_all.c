#include "variadic_functions.h"

/**
  * sum_them_all - sums all the given args
  *
  * @n: number of args
  *
  * Return: int, sum of args
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list myargs;
	unsigned int loop;
	int result;

	if (n == 0)
		return (0);
	result = 0;
	va_start(myargs, n);
	for (loop = 0; loop < n; loop++)
	{
		result += va_arg(myargs, unsigned int);
	}
	va_end(myargs);
	return (result);
}
