#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of list
 * @head: pointer to pointer to listint_t (double pointer)
 * @n: an integer
 *
 * Return: address to new elem, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodenew = malloc(sizeof(listint_t));

	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;
	nodenew->next = NULL;

	if (*head == NULL)
		*head = nodenew;

	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = nodenew;
	}

	return (nodenew);
}
