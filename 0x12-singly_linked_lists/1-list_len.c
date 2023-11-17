#include "lists.h"

/**
 * list_len - gives no of elements in list_t
 * @h: pointer to list_t
 *
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->len != 0)
		{
			h = h->next;
			t++;
		}
	}
	return (t);
}
