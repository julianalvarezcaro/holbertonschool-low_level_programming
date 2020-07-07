#include "holberton.h"

/**
  * alloc_grid - Returns a pointer to a 2D array of ints
  *
  * @width: columns of array
  * @height: rows of array
  *
  * Return: pointer to the matrix
  */
int **alloc_grid(int width, int height) // 5, 6
{
	int **matrix;
	int loop;
	int fil;
	int col;
	int fre;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (loop = 0; loop < height; loop++)
	{
		matrix[loop] = (int *) malloc(width * sizeof(int));
		if (matrix[loop] == NULL)
		{
			for(fre = 0; fre < height; fre++)
			{
				free(matrix[fre]);
			}
			free(matrix);
			return (NULL);
		}
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
