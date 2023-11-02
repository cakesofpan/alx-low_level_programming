#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: first int in array
 * @max: last int in array
 *
 * Return: array of ints
 */
int *array_range(int min, int max)
{
	int *num;
	int t, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	num = malloc(sizeof(int) * size);

	if (num == NULL)
		return (NULL);

	for (t = 0; min <= max; t++)
		num[t] = min++;

	return (num);
}
