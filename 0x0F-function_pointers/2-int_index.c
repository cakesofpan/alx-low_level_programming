#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: no of elements in the array
 * @cmp: pointer to function for comparing values
 *
 * Return: index of the 1st integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);

	for (t = 0; t < size; t++)
	{
		if (cmp(array[t]) != 0)
			return (t);
	}

	return (-1);
}
