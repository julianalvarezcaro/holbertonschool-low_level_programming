#include "variadic_functions.h"

/**
 * print_all - prints all the arrguments
 *
 * @format: string that tells the format of the argumets
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list myargs;
	int loopf;
	int loops;

	print_t printfs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	loopf = 0;
	va_start(myargs, format);
	while (format[loopf] != '\0')
	{
		loops = 0;
		while (printfs[loops].format != NULL)
		{
			if (format[loopf] == *(printfs[loops].format))
			{
				(printfs[loops].function) (myargs);
				break;
			}
			loops++;
		}
		if (format[loopf + 1] != '\0' && printfs[loops].format != NULL)
			printf(", ");
		loopf++;
	}
	printf("\n");
}

/**
  * print_c - prints a char
  *
  * @myarg: list to take the arg from
  *
  * Return: void
  */
void print_c(va_list myarg)
{
	printf("%c", va_arg(myarg, int));
}

/**
  * print_i - prints an int
  *
  * @myarg: list to take the arg from
  *
  * Return: void
  */
void print_i(va_list myarg)
{
	printf("%d", va_arg(myarg, int));
}

/**
  * print_f - prints a float
  *
  * @myarg: list to take the arg from
  *
  * Return: void
  */
void print_f(va_list myarg)
{
	printf("%f", va_arg(myarg, double));
}

/**
  * print_s - prints a string
  *
  * @myarg: list to take the arg from
  *
  * Return: void
  */
void print_s(va_list myarg)
{
	printf("%s", va_arg(myarg, char *));
}
