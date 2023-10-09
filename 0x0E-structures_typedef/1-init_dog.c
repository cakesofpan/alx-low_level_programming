#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to a string of chars
 * @age: integer
 * @owner: pointer to a string of chars
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
