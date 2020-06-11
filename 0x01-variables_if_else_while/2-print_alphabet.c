#include <stdio.h>
int main(void);
/**
* main - print the alphabet in lower case
*
* Return: 0 always
*/
int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
