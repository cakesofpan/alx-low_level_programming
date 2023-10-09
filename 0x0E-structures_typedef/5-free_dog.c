#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog_t (new name for struct dog)
 *
 * Return: freed memory
 */
void free_dog(dog_t *d)
{
	free(d);
}