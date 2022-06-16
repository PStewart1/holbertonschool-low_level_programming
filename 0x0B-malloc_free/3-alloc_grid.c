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
	int **grid, *ptr;
	int i, j, len = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * width + sizeof(int) * height * width;
	grid = (int **)malloc(len);
	if (grid == NULL)
		return (NULL);

	ptr = (int *)(grid + width);
	for (i = 0; i < width; i++)
		grid[i] = (ptr + height * i);

	for (i = 0; i < width; i++)
	{

		for (j = 0; j < height; j++)
			grid[i][j] = 0;

	}
	return (grid);
}
