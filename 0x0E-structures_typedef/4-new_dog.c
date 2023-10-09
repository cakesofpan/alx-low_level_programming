#include "dog.h"

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

	dogobj->name = name;
	dogobj->age = age;
	dogobj->owner = owner;
	return (0);
}
