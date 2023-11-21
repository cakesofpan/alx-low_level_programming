#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: pointer to list
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		t++;
	}
	return (t);
}
