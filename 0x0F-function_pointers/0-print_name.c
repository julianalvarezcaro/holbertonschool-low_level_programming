#include "function_pointers.h"

/**
  * print_name - prints a name
  *
  * @name: name to print
  * @f: pointer to the function that prints the name
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
	{
		(*f)("");
		return;
	}
	(*f)(name);
}
