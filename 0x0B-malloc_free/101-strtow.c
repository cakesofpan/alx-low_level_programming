#include "main.h"

/**
 * free_grid - frees memory
 * @grid: pointer to pointer to a grid
 * height: input
 *
 * Return: NULL
 */
void free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);

		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: split string
 */
char **strtow(char *str)
{
	char **aout;
	size_t m, height, t, u, al;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (m = height = 0; str[m] != '\0'; m++)
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
		height++;

	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL)
		{
			free(aout);
			return (NULL);
		}

	for (t = al = 0; t < height; t++)
	{
		for (m = al; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				al++;

			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				aout[t] = malloc((m - al + 2) * sizeof(char));
				if (aout[t] == NULL)
				{
					free_grid(aout, t);
					return (NULL);
				}
				break;
			}
		}

		for (u = 0; al <= m; al++, u++)
			aout[t][u] = str[al];
		aout[t][u] = '\0';
	}
	aout[t] = NULL;
	return (aout);
}
