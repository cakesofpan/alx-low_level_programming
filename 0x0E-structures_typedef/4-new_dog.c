#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, t;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (nl = 0; name[nl]; nl++)
		;
	nl++;

	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (t = 0; t < nl; t++)
		dog->name[t] = name[t];

	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;

	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (t = 0; t < ol; t++)
		dog->owner[t] = owner[t];
	return (dog);
}
