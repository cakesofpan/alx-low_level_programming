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
	unsigned int n1, n2, t;
	dog_t *dogobj;

	if (name == NULL || owner == NULL)
		return (NULL);

	dogobj = malloc(sizeof(dog_t));

	if (dogobj == NULL)
		return (0);
	
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dogobj->name = malloc(n1 * sizeof(char));
	if (dogobj->name == NULL)
	{
		free(dogobj);
		return (NULL);
	}
	
	for (t = 0; t < n1; t++)
		dogobj->name[t] = name[t];

	dogobj->age = age;
	for (n2 = 0; owner[n2]; n2++)
		;
	n2++;

	dogobj->owner = malloc(n2 * sizeof(char));
	if (dogobj->owner == NULL)
	{
		free(dogobj->name);
		free(dogobj);
		return (NULL);
	}
	
	for (t = 0; t < n2; t++)
		dogobj->owner[t] = owner[t];

	return (dogobj);
}
