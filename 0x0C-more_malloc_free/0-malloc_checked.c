#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer that determines the size to be used
 *
 * Return: pointer to allocated memory (result)
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(sizeof(unsigned int) * b);

	if (result == NULL)
		printf("98");

	return (result);
	free(result);
}
