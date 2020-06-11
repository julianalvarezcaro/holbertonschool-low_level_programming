#include <stdio.h>
#include <unistd.h>
int main(void);

/**
* main - will display a message
*
* Return: 1 always
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
