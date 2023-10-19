#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to list_t (struct list_s alias)
 *
 * Return: number of elements/nodes
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str != 0)
		{
			t++;
		}
		h = h->next;
	}
	return (t);
}
