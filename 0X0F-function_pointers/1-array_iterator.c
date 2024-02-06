#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a paramater on each element on an array
 * @array: an array
 * @size: size of an array
 * @action: pointer to the function you need to use
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t;

	if (array && action)
	{
		t = 0;
		while (t < size)
		{
			action(array[t]);
			t++;
		}
	}
}
