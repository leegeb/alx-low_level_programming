#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously done
 * @grid: int type
 * @height: int type
 * Return: free memory
 */

void free_grid(int **grid, int height)
{
	int b;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
