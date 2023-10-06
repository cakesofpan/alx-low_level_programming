#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer old memory space
 * @old_size: size of allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mpya;

	mpya = malloc(new_size);

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);

		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (mpya == NULL)
		return (NULL);

	memcpy(mpya, ptr, (old_size < new_size) ? old_size : new_size);
	free(mpya);
	free(ptr);
	return (mpya);
}
