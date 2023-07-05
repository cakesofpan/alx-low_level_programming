#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to pointer to listint_t (double pointer)
 * @index: index of node from 0
 *
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now = head;

	if (now == NULL)
		return (NULL);

	while (now != NULL && index > 0)
	{
		now = now->next;
		index--;
	}

	return (now);
}
