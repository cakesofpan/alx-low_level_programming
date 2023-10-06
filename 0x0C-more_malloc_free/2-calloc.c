#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of elements in an array
 * @size: no of bytes in each element
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *result;

	result = malloc(nmemb * sizeof(unsigned int));
	if (nmemb == 0 || size == 0 || result == 0)
	{
		exit(0);
	}
	return (result);
}
