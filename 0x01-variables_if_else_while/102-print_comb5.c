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
	int fourthDig;

	for (firstDig = 48; firstDig < 58; firstDig++)
	{
		for (secDig = 48; secDig < 58; secDig++)
		{
		for (thirdDig = firstDig; thirdDig < 58; thirdDig++)
		{
		for (fourthDig = secDig; fourthDig < 58; fourthDig++)
		{
		if ((firstDig + secDig) != (thirdDig + fourthDig))
		{
		putchar(firstDig);
		putchar(secDig);
		putchar(' ');
		putchar(thirdDig);
		putchar(fourthDig);
		if (firstDig < 57 || secDig < 56 || thirdDig < 57 || fourthDig < 57)
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
