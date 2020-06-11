#include <stdio.h>

/**
* main - prints single digit numbers
*
* Return: 0 always
*/

int main(void)
{
	int ascii;

	for (ascii = 48; ascii < 58; ascii++)
	{
		putchar(ascii);
		if (ascii < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
