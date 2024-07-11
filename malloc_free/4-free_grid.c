#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_grid - frees 2 dim created by alloc_grid
 *@grid: ptr to dim
 *@height: grid's height
*/

void free_grid(int **grid, int height)
{
	int l;

	if (grid == NULL || height <= 0)
		return;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}

	free(grid);
}
