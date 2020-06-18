#include "holberton.h"

/**
* more_numbers - prints numbers from 0 to 14 10 times
*
* Return: void
*/
void more_numbers(void)
{
	int countLines;
	char countNum;
	char num = '0';

	for (countLines = 0; countLines < 10; countLines++)
	{
		for (countNum = 0; countNum <= 14; countNum++)
		{
			if (countNum >= 10)
				_putchar('1');
			if (countNum == 10)
				num = '0';
			_putchar(num);
			num++;
		}
		num = '0';
		_putchar('\n');
	}
}
