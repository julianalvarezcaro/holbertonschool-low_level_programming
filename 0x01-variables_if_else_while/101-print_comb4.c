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
	int thirdDig;

	for (firstDig = 48; firstDig < 58; firstDig++)
	{
		for (secDig = firstDig + 1; secDig < 58; secDig++)
		{
		for (thirdDig = secDig + 1; thirdDig < 58; thirdDig++)
		{
		putchar(firstDig);
		putchar(secDig);
		putchar(thirdDig);
		if (firstDig < 55 || secDig < 55)
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
