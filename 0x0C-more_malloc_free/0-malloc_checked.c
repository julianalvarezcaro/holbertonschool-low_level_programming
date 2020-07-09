#include "holberton.h"

/**
  * malloc_checked - Allocates memory and returns a pointer to it
  *
  * @b: bytes to be allocated
  *
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
