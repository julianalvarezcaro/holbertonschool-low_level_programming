#include "holberton.h"

/**
  * array_range - Creates an array of integers
  *
  * @min: minimun value to be included in the array
  * @max: maximin value to be included in the array
  *
  * Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *ptr;
	int range;
	int loop;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (loop = 0; loop < range; loop++)
	{
		ptr[loop] = min + loop;
	}
	return (ptr);
}
