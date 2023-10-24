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
	char *mpya;
	unsigned int t;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mpya = malloc(new_size);

		if (mpya == NULL)
			return (NULL);
		return (mpya);
	}

	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	mpya = malloc(new_size);

	if (mpya == NULL)
		return (NULL);

	for (t = 0; t < old_size && t < new_size; t++)
	{
		mpya[t] = ((char *) ptr)[t];
	}

	free(ptr);
	return (mpya);
}
