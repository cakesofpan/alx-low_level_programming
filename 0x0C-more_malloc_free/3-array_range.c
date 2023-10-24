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
	int t = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[t] = min;
		t++;
		min++;
	}
	return (arr);
}
