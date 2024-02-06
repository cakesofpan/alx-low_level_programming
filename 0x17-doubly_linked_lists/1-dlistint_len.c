#include "lists.h"
/**
 * dlistint_len - gives no of elements
 * @h: pointer to the first element in the list
 *
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;

	if (h == NULL)
		return NULL;

	while (h != NULL)
	{
		h = h-next;
		t++;
	}
	return (t);
}
