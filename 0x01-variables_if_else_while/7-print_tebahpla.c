#include <stdio.h>

/**
* main - prints the alphaet backwards
*
* Return: always 0
*/
int main(void)
{
	int alpha;

	for (alpha = 122; alpha > 96; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
