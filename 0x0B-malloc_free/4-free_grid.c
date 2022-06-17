#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: the size of the array
 * @c: the initial char
 *
 * Return: pointer to the array, or NULL if failed..
 */

void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free (ptr);
	}

	free (grid);

}
