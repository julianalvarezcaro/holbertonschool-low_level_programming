#include <stdio.h>

/**
* main -prints the alphabet in lowercase then in uppercase
*
* Return: 0 always
*/
int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (char alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
