#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to function to be used
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t = 0;

	if (array && action)
	{
		while (t < size)
		{
			(*action) (array[t]);
			t++;
		}
	}
}
