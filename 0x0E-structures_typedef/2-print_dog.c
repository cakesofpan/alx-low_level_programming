#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a variable of struct dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name = (nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d->age == 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: (nil)");
		printf("Owner: %s\n", d->owner);
	}

	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: (nil)");
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
