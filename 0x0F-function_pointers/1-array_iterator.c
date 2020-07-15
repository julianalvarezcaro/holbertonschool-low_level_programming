#include "function_pointers.h"

/**
  * array_iterator - maps a function
  *
  * @array: array to be mapped
  * @size: size of the array
  * @action: function to map
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t loop;

	if (array == 0 || action == 0 || size == 0)
		return;
	for (loop = 0; loop < size; loop++)
	{
		(*action)(array[loop]);
	}
}
