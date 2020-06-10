#include <stdio.h>
int main(void);

/**
* main - Prints the size of different data types
*
* Return: 0 always
*/
int main(void)
{
	puts("Size of a char: ", sizeof(char), " byte(s)");
	puts("Size of an int: " sizeof(int), " byte(s) ");
	puts("Size of a long int: " sizeof(long), " byte(s) ");
	puts("Size of a long long int: " sizeof(double), " byte(s) ");
	puts("Size of a float: " sizeof(float), " byte(s) ");
	return (0);
}
