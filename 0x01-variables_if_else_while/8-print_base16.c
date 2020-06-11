#include <stdio.h>

/**
* main - prints every digit from hexadecimal
*
* Return: 0 always
*/
int main(void)
{
	int hexa;

	for (hexa = 48; hexa < 58; hexa++)
		putchar(hexa);
	for (hexa = 97; hexa < 103; hexa++)
		putchar(hexa);
	putchar('\n');
	return (0);
}
