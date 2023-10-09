#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog_t object
 * @name: a string
 * @age: an integer
 * @owner: a string
 *
 * Return: the new dog, NULL if failed
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogobj;

	dogobj = malloc(sizeof(dog_t));

	if (dogobj == NULL)
		return (0);

	dogobj->name = malloc(strlen(name) + 1);
	if (dogobj->name == NULL)
	{
		free(dogobj->owner);
		return (NULL);
	}
	strcpy(dogobj->name, name);

	dogobj->age = age;

	dogobj->owner = malloc(strlen(owner) + 1);
	if (dogobj->owner == NULL)
	{
		free(dogobj->name);
		return (NULL);
	}
	strcpy(dogobj->owner, owner);

	free(dogobj);
	return (dogobj);
}
