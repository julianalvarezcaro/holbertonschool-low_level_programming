#include <stdio.h>

/**
* main - prints single digit numbers
*
* Return: 0 always
*/

int main(void)
{
	int firstDig;
	int secDig;

	for (firstDig = 48; firstDig < 58; firstDig++)
	{
		for (secDig = firstDig + 1; secDig < 58; secDig++)
		{
		putchar(firstDig);
		putchar(secDig);
		if (firstDig < 56 || secDig < 56)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
