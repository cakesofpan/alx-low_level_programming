#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: rows in the array
 * @height: represents columns in the array
 *
 * Return: pointer to the array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int t, q, m;
	int **grid;

	grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid != NULL)
	{
		for (t = 0; t < height; t++)
		{
			grid[t] = malloc(width * sizeof(int));
			if (grid[t] == NULL)
			{
				for (m = 0; m < t; m++)
					free(grid[t]);

				free(grid);
				return (NULL);
			}

			for (q = 0; q < width; q++)
			{
				grid[t][q] = 0;
				if (!(width <= 0) || !(height <= 0))
				{
					_putchar('0');
					_putchar(' ');
				}

				else
					return (NULL);
			}
			_putchar('\n');
		}
	}

	return (grid);
	free(grid);
}
