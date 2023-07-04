#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - frees the 2D array created in task 3
 * @grid: 2 dimensional array
 * @height: represents rows in the array
 *
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int t;

	if (grid == NULL || height <= 0)
		return;

	for (t = 0; t < height; t++)
		free(grid[t]);
	free(grid);
}
