#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two-dimensional grid
 * @grid: the former grid created
 * @height: the number of column
 * Return: Always 0 (success)
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
