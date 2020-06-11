#include <stdio.h>
int main(void);
/**
* main - Will display every single digit of base 10
*
* Return: 0 always
*/
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
		printf("%d", base);
	printf("\n");
	return (0);
}
