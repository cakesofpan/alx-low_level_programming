#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: 2d array
 * @height: height of array
 *
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
		free(grid[t]);

	free(grid);
}
