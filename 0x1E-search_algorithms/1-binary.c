#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using Binary search
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index where value was found. -1 if NULL array or value not found
 */
int binary_search(int *array, size_t size, int value)
{
	int  l, m, r;

	if (!array)
		return (-1);
	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - prints an array from a position
 *
 * @array: array to be printed
 * @l: from where the array is going to be printed
 * @r: last position of the array that is going to be printed
 *
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t index;
	char *sep = "";

	for (index = l; index <= r; index++)
	{
		printf("%s%d", sep, array[index]);
		sep = ", ";
	}
	printf("\n");
}
