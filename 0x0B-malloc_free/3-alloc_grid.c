#include "main.h"

/**
 * alloc_grid - returns pointer to 2d array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid, t, u;
	int len;

	len = width * height;

	if (len <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		grid[t] = malloc(sizeof(int) * width);
		if (grid[t] == NULL)
		{
			for (t--; t >= 0; t--)
				free(grid[t]);

			free(grid);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (u = 0; u < width; u++)
			grid[t][u] = 0;
	}

	return (grid);
}
