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
	size_t total;

	if (nmemb == 0 || size == 0)
	{
		exit(0);
	}

	total = nmemb * size;
	result = malloc(total);

	if (result == NULL)
		return (NULL);
	memset(result, 0, total);

	return (result);
}
