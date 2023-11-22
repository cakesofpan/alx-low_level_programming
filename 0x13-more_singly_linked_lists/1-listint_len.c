#include "lists.h"

/**
 * listint_len - gives the no of elements
 * @h: pointer to the list
 *
 * Return: the no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t t;

	while (h != NULL)
	{
		h = h->next;
		t++;
	}
	return (t);
}
