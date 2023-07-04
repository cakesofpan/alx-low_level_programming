#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of array elements
 * @size: no. of bytes in each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	result = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (0);

	if (result != NULL)
		memset(result, 0, nmemb * size);

	return (result);
	free(result);
}
