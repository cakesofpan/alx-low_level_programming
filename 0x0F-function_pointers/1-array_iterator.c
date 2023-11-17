#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function to be used
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
