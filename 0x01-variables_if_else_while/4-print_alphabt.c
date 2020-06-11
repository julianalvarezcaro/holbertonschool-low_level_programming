#include <stdio.h>

/**
* main - print the alphabet in lower case except for the letter e and q
*
* Return: 0 always
*/
int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
