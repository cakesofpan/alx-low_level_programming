#include "lists.h"

/**
 * listint_len - returns no of elements
 * @h: pointer to listint_t
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->n != 0)
			t++;

		h = h->next;
	}
	return (t);
}
