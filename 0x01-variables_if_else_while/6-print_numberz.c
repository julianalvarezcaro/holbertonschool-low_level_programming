#include <stdio.h>

/**
* main - prints every digit from base 10
*
* Return: 0 always
*/
int main(void)
{
	int base;

	for (base = 48; base < 58; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
