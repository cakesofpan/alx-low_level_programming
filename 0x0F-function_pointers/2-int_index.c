#include <stdio.h>
#include "function_pointers.h"

/**
 * compare - compares values
 * @num: an integer
 *
 * Return: num
 */
int *compare(int *num)
{
	return (num);
}

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: no. of elements in an array
 * @cmp: function pointer
 *
 * Return: index to the searched integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);

	else
	{
		for (t = 0; t < size; t++)
		{
			cmp = &compare;
			if (cmp(array[t]) == 0)
				return (t);
		}
	}
	return (-1);
}
