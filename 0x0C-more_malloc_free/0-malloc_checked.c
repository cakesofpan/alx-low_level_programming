#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: what is to be allocated memory
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);

	free(result);
	return (result);
}
