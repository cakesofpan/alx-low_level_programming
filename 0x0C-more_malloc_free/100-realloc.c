#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size of space for ptr
 * @new_size: size of new memory block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		copy = old_size;
	else
		copy = new_size;

	memcpy(new_ptr, ptr, copy);
	free(ptr);

	return (new_ptr);
	free(new_ptr);
	free(ptr);
}
