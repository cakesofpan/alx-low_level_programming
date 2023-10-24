#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: what is to be allocated memory
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);

	return (result);
}
