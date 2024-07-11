#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Function that return ptr to 2 dim array of ints
 * @height: grid's height
 * @width: grid's weight
 * Return: ptr to 2 dim array or NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	for (m = 0; m < height; m++)
	{
	grid = (int **)malloc(width * sizeof(int));
	if (grid == NULL)
	{
	for (n = 0; n < m; n++)
	{
	free(grid[n]);
	}
	free(grid);
	return (NULL);
	}
	for (n = 0; n < width; n++)
	{
	grid[m][n] = 0;
	}
	}
	return (grid);
}
