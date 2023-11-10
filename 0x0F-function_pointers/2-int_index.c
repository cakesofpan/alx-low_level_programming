#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: no of elements in array
 * @cmp: pointer to function for comparing values
 *
 * Return: index of first integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
				if (cmp(array[t]))
					return (t);

				t++;
			}
		}
	}
	return (-1);
}

