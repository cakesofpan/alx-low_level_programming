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

	grid = malloc(height * sizeof(int));

	for (t = 0; t < height; t++)
		grid[height] = malloc(width * sizeof(int));

	for (t = 0; t < height; t++)
	{
		for (q = 0; q < width; q++)
		{
			if (!(width <= 0) || !(height <= 0))
			{
				putchar('0');
				putchar(' ');
			}

			else
				return (NULL);
		}
		printf("\n");
	}
	return (grid);
}

