#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer to listint_t (double pointer)
 * idx: index where node is added, starts from 0
 * @n: an integer
 *
 * Return: address to new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t = 0;
	listint_t *nodenew = malloc(sizeof(listint_t);
	listint_t *now = *head;

	if (head == NULL)
		return (NULL);

	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;

	if (idx == 0)
	{
		nodenew->next = *head;
		*head = nodenew;
		return (nodenew);
	}

	while (now != NULL && t < idx - 1)
	{
		now = now->next;
		t++;
	}

	if (now == NULL)
	{
		free(nodenew);
		return (NULL);
	}

	nodenew->next = now->next;
	now->next = nodenew;

	return (nodenew);
}
