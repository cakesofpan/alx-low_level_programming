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
	int *result;
	int t;

	result = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (0);

	else
	{
		while (result[t] < '\0')
		{
			result[t] = 0;
			t++;
		}
	}
	return (result);
	free(result);
}
