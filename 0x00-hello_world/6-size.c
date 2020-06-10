#include <stdio.h>
int main(void);

/**
* main - Prints the size of different data types
*
* Return: 0 always
*/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(double));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
