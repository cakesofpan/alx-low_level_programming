#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %.6f\n", (d->age != 0) ? d->age : 0.0);
    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

    if (d->name == NULL)
    {
            printf("Name: (nil)\n");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner);
    }

    else if (d->age == 0)
    {
            printf("Name: %s\n", d->name);
    printf("Age: (nil)\n");
    printf("Owner: %s\n", d->owner);
    }
    else if (d->owner == NULL)
    {
            printf("Name: %s\n", d->name);
    printf("Age: %.6f\n", d->age);
    printf("Owner: (nil)\n");
    }
    else
    {
            printf("Name: %s\n", d->name);
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner);
    }
}
