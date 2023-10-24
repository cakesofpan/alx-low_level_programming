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
	char *result;
	int t = 0, total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	result = malloc(total);

	if (result == NULL)
		return (NULL);
	while (t < total)
	{
		result[t] = 0;
		t++;
	}

	return (result);
}
