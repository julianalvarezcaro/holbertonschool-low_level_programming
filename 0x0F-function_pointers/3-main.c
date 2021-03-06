#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - exucutes an operation with two numbers
  *
  * @argc: number of args
  * @argv: list of args
  *
  * Return: 0 if succesful. 98 if wrong argc. 99 if operator not found.
  * 100 if tries to divide of module by 0.
  */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	int (*ptrFun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (*get_op_func(argv[2]) == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptrFun = get_op_func(argv[2]);
	result = ptrFun(a, b);

	printf("%d\n", result);
	return (0);

}
