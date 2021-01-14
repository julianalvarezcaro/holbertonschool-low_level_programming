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

	/*
	* Locates the block in which 'value' is
	*/
	while (array[min(b, size)] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		if (a >= (int) size)
			return (-1);
		if (b >= (int) size)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%d] and [%d]\n", a, b);

	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a += 1;
		if (a == min(b + 1, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
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
