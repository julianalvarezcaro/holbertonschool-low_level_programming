#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using the linear search
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched in the array
 *
 * Return: index of the first ocurrence of value in the array.
 * NULL if not found or empty array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
