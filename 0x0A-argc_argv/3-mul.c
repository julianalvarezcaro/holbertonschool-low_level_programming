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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
