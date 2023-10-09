#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (*d == NULL)
		return (0);

	else
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : printf("Name: (nil)");
		printf("Age: %.6f\n", (d->age != 0) ? d->age : printf("Age: (nil)");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : printf("Owner: (nil)");
	}
}
