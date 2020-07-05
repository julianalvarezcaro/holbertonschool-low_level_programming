#include "holberton.h"

/**
  * main - prints all the args that it gets
  *
  * @argc: number of args
  * @argv: array of pointers to args
  *
  * Return: 0 always
  */
int main(int argc, char *argv[])
{
	int loop;

	for (loop = 0; loop < argc; loop++)
	{
		printf("%s\n", argv[loop]);
	}
	return (0);
}
