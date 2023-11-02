#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of elements
 * @size: size of each array element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *num;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	num = malloc(nmemb * size);
	if (num == NULL)
		return (NULL);

	for (t = 0; t < (nmemb * size); t++)
		num[t] = 0;

	return (num);
}
