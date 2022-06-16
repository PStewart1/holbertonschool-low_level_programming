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

	len = sizeof(int *) * height + sizeof(int) * height * width;
	grid = (int **)malloc(len);
	if (grid == NULL)
		return (NULL);

	ptr = (int *)(grid + height);
	for (i = 0; i < height; i++)
		grid[i] = (ptr + width * i);

	for (i = 0; i < height; i++)
	{

		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	}
	return (grid);
}
