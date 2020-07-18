#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: separates the printed numbers
 * @n: number of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myargs;
	unsigned int nums;

	va_start(myargs, n);
	if (separator == NULL)
	{
		for (nums = 0; nums < n; nums++)
		{
			if (nums != n - 1)
				printf("%d", va_arg(myargs, int));
			else
				printf("%d\n", va_arg(myargs, int));
		}
	}
	else
	{
		for (nums = 0; nums < n; nums++)
		{
			if (nums != n - 1)
				printf("%d%s", va_arg(myargs, int), separator);
			else
				printf("%d\n", va_arg(myargs, int));
		}
	}
	va_end(myargs);
}
