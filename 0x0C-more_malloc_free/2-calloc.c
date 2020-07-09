#include "holberton.h"

/**
  * _calloc - allocates memory for an array
  *
  * @nmemb: number of elements of the array
  * @size: size of the elements of the array
  *
  * Return: Pointer to the allocated memory
  *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int loop;
	int len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	len = nmemb * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	for (loop = 0; loop < len; loop++)
	{
		ptr[loop] = 0;
	}
	return (ptr);
}
