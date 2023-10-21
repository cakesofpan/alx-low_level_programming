#include "main.h"

/**
 * alloc_grid - creates a 2d array of ints
 * @width: represents rows
 * @height: represents column
 *
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int t, q;
	int **grid;

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	if (width <= 0 || height <= 0)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		grid[t] = malloc(width * sizeof(int));
		if (grid[t] == NULL)
		{
			for (t--; t >= 0; t--);

			free(grid);
			free(grid[t]);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (q = 0; q < width; q++)
		{
			grid[t][q] = 0;
		}
	}
	return (grid);
}
