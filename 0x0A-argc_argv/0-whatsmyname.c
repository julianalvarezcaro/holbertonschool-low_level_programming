#include "holberton.h"

/**
  * main - prints the name of the program
  *
  * @argc: number of args
  * @argv: array of pointers
  *
  * Return: 0 always
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
