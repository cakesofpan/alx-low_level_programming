#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: pointer to list
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	int t = 0;

	while (h)
	{
		if (h->n == 0)
		{
			printf("0 elements\n");
		}
		else
			printf("%d elements", h->n);

		t++;
		h = h->next;
	}
	return (t);
}
