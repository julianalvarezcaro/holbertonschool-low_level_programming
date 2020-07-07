#include "holberton.h"

/**
  * create_array - creates an array and initializes it
  *
  * @size: int size of the array
  * @c: char to initialize the array with
  *
  * Return: Pointer to the array or null if failed of size 0
  */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int loop;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = (char *) malloc(size * sizeof(char));
		if(ar == NULL)
			return(NULL);
		for (loop = 0; loop < size; loop++)
		{
			ar[loop] = c;
		}
		return (ar);
	}
	return (NULL);
}
