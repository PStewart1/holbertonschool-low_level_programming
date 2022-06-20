#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees an array of int pointers
 * @grid: array to be freed
 * @height: height of array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free(ptr);
	}

	free(grid);

}
