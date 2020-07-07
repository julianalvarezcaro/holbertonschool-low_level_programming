#include "holberton.h"

/**
  * free_grid - frees memory allocated by malloc
  *
  * @grid: grid to be freed
  * @height: height of the grid
  *
  * Return: void
  *
  */
void free_grid(int **grid, int height)
{
	int loop;

	for (loop = 0; loop < height; loop++)
		free(grid[loop]);
	free(grid);
}
