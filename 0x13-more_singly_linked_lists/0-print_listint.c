#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: pointer to listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d", h->n);
			h = h->next;
			t++;
		}
	}

	return (t);
}
