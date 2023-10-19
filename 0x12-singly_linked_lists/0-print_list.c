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

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			if (h->str[0] != '\0')
			{
				printf("[%u] %s\n", h->len, h->str);
				t++;
			}

			else
			{
				printf("[0]\n");
				t++;
			}
		}

		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (t);
}
