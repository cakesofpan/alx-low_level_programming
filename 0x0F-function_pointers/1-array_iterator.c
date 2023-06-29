#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: an array
 * @size: size of the array
 * @action: pointer to function to be used
 * 
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int t;

	for (t = 0; t < size; t++)
		(*action)(array[t]);
}
