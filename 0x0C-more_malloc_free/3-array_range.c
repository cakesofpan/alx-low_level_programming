#include <stdio.h>
#include <stdlib.h>
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

	q = max - min;
	arr = malloc(q * sizeof(int));

	for (t = min; t <= max; t++)
		_putchar(arr[t]);

	return (arr);
	free(arr);
}
