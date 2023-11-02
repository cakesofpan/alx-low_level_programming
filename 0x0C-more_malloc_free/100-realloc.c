#include "main.h"

/**
 * _realloc - reallocates memory block using malloc
 * @ptr: pointer to previous memory
 * @old_size: size for ptr
 * @new_size: size of new block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int t, n;
	char *oldp;

	n = new_size;
	oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (t = 0; t < n; t++)
		p[t] = oldp[t];

	free(ptr);
	return (p);
}
