#include "lists.h"
/**
 * print_dlistint - prints all the elements of dlistint_t list
 * @h: pointer to first node in the list
 *
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t t;

	if (h == NULL)
		return NULL;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h-next;
		t++;
	}
	return (t);
