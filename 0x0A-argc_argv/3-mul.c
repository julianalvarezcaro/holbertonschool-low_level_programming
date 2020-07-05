#include "holberton.h"

/**
  * main - multiplies 2 numbers
  *
  * @argc: number of args
  * @argv: array of pointers to the args
  *
  * Return: 0 if succesfull, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int a = *argv[1];
	int b = *argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", a);
		printf("%d\n", b);

		printf("%d\n", *argv[1] * *argv[2]);
		return (0);
	}
}
