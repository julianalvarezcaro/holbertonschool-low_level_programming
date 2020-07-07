#include "holberton.h"

/**
  * alloc_grid - Returns a pointer to a 2D array of ints
  *
  * @width: columns of array
  * @height: rows of array
  *
  * Return: pointer to the matrix
  */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int loop;
	int fil;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **) malloc(width * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (loop = 0; loop < height; loop++)
	{
		matrix[loop] = (int *) malloc(height * sizeof(int));
		if (matrix == NULL)
			return (NULL);
	}
	for (fil = 0; fil < height; fil++)
	{
		for (col = 0; col < width; col++)
		{
			matrix[fil][col] = 0;
		}
	}
	return (matrix);

}
