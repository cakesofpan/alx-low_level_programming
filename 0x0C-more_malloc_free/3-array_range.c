#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first no to be included
 * @max: maximum/last no to be included
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int t, q;
	int *arr;

	if (min > max)
		return (NULL);

	q = max - min + 1;
	arr = malloc(q * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (t = 0; t <= q; t++)
	{
		arr[t] = min + 1;
	}
	return (arr);
	free(arr);
}
