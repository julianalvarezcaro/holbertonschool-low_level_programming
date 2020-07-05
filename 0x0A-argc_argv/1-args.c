#include "holberton.h"

/**
  * main - prints the number of args
  *
  * @argc: number of args
  * @argv: array of pointers to the args
  *
  * Return: 0 always
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
