#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t list
 *
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	int t = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		t++;
		h = h->next;
	}
	return (t);
}
