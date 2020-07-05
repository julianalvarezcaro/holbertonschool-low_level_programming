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
	int che, ck;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (loop = 1; loop < argc; loop++)
	{
		num = argv[loop];
		for (che = 0; num[che] != '\0'; che++)
		{
			if (num[che] < 48 || num[che] > 57)
				ck = 1;
		}
		if (ck == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
			add += atoi(argv[loop]);
	}
	printf("%d\n", add);
	return (0);
}
