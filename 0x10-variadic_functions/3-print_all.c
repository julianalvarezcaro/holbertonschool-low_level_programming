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

	struct prints printfs[] = 
	{
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

void print_c(va_list myarg)
{
	printf("%c", va_arg(myarg, int));
}

void print_i(va_list myarg)
{
	printf("%d", va_arg(myarg, int));
}

void print_f(va_list myarg)
{
	printf("%f", va_arg(myarg, double));
}

void print_s(va_list myarg)
{
	printf("%s", va_arg(myarg, char *));
}
