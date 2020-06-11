#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - will print a randowm number and specify if it is positive or negative
*
* Return: 0 always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
			else
				printf("%d is positive\n", n);
	return (0);
}
