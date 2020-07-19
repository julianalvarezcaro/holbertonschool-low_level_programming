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
	char *sep = "";

	print_t printfs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	loopf = 0;
	va_start(myargs, format);
	while (format[loopf] && format)
	{
		loops = 0;
		while (printfs[loops].form != NULL)
		{
			if (format[loopf] == *(printfs[loops].form))
			{
				printf("%s", sep);
				(printfs[loops].function) (myargs);
				sep = ", ";
				break;
			}
			loops++;
		}
		loopf++;
	}
	printf("\n");
	va_end(myargs);
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
	char *s;

	s = va_arg(myarg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
