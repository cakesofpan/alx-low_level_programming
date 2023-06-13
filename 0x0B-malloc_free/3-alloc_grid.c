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
	int t, q;
	int **grid;

	grid = malloc(height * sizeof(int *));

	for (t = 0; t < height; t++)
		grid[height] = malloc(width * sizeof(int));

	for (t = 0; t < height; t++)
	{
		for (q = 0; q < width; q++)
		{
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

	for (t = 0; t < height; t++)
		free(grid[height]);

	free(grid);
	return (grid);
}
