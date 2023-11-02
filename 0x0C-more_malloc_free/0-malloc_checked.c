#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: to be allocated memory
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
