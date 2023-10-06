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

	q = max - min;
	arr = malloc(q * sizeof(int));

	for (t = min; t <= max; t++)
	{
		putchar(arr[t]);
	}
	return (arr);
	free(arr);
}
