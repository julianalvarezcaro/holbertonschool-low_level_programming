#include "holberton.h"
#include <ctype.h>

/**
  * main - prints addition of 2 numbers
  *
  * @argc: number of args
  * @argv: array of pointers to args
  *
  * Return: 0 is succesful, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int loop;
	int add = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (loop = 1; loop < argc; loop++)
		{
			if (isdigit(*argv[loop] == 0))
			{
				printf("Error\n");
				return (1);
			}
			else
				add += atoi(argv[loop]);
		}
		printf("%d\n", add);
	}
	return (0);
}
