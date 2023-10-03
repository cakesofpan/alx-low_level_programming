#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: pointer to 2d pointer
 * @height: sijui
 *
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[height]);
	}

	free(grid);
}
