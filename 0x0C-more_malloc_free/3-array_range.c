#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first element in array
 * @max: last element in array
 *
 * Return: pointer to new array
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

	for (t = 0; t < q; t++)
		arr[t] = min++;

	return (arr);
	free(arr);
}
