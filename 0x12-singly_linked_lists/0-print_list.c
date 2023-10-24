#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t (struct list_s alias)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);

		}

		else
		{
			printf("[0]\n");
		}

		t++;
		h = h->next;
	}
	return (t);
}
