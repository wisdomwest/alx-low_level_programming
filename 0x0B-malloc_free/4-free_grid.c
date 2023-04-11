#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory alllocated by alloc_grid
 * @grid: pointer to grid
 * @height: height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
