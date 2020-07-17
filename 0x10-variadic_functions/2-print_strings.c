#include "variadic_functions.h"

/**
  * print_strings - prints strings
  *
  * @separator: separates the strings
  * @n: number of strings
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myargs;
	unsigned int loop;
	char *curstring;

	if (n == 0)
		return;
	va_start(myargs, n);
	if (separator == NULL)
	{
		for (loop = 0; loop < n; loop++)
		{
			curstring = va_arg(myargs, char *);
			if (curstring == NULL)
				printf("(nil)");
			else
				printf("%s", curstring);
			if (loop == n - 1)
				printf("\n");
		}
	}
	else
	{
		for (loop = 0; loop < n; loop++)
		{
			curstring = va_arg(myargs, char *);
			if (curstring == NULL)
				printf("(nil)");
			else
				printf("%s", curstring);
			if (loop != n - 1)
				printf("%s", separator);
			else
				printf("\n");

		}
	}
	va_end(myargs);
}
