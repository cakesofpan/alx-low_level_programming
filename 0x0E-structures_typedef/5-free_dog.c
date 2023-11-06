#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to struct dog_t
 *
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
