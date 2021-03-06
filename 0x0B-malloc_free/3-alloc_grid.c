#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2D array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the grid, or NULL if failed.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i; 

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);

		/*for (j = 0; j < width; j++)
			grid[i][j] = 0;*/
	}

	return (grid);

}
