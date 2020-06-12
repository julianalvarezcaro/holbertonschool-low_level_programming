#include <stdio.h>

/**
* main - prints single digit numbers
*
* Return: 0 always
*/

int main(void)
{
	int firDig;
	int secDig;
	int thirdDig;
	int fourDig;

	for (firDig = 48; firDig < 58; firDig++)
	{
		for (secDig = 48; secDig < 58; secDig++)
		{
		for (thirdDig = firDig; thirdDig < 58; thirdDig++)
		{
		for (fourDig = secDig; fourDig < 58; fourDig++)
		{
		if ((firDig + secDig) != (thirdDig + fourDig))
		{
		putchar(firDig);
		putchar(secDig);
		putchar(' ');
		putchar(thirdDig);
		putchar(fourDig);
		if (firDig < 57 || secDig < 56 || thirdDig < 57 || fourDig < 57)
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
