#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using Jump Search
 *
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of the first ocurrence of value in the array
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b;

	if (!array)
		return (-1);

	a = 0;
	b = sqrt(size);

	while (array[min(b, size) - 1] < value)
	{
		a = b;
		b += sqrt(size);
		if (a >= (int) size)
			return (-1);
	}

	while (array[a] < value)
	{
		a += 1;
		if (a == min(b, size))
			return (-1);
	}
	if (array[a] == value)
		return (a);
	else
		return (-1);
}

/**
 * min - gets the min value between two arguments
 *
 * @a: integer
 * @b: integer
 *
 * Return: smaller int between a and b
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
