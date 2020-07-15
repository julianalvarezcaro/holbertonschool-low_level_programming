#include "function_pointers.h"

/**
  * int_index - finds an int in array
  *
  * @array: array in which the elements are in
  * @size: size of the array
  * @cmp: compares the element given with the required one
  *
  * Return: index of the number found (if so)
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loop;

	if (array == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (loop = 0; loop < size; loop++)
	{
		if ((*cmp)(array[loop]))
			return (loop);
	}
	return (-1);
}
