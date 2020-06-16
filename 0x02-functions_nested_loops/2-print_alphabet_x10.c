#include "holberton.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int counter;
	char alpha;

	for (counter = 0; counter < 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
