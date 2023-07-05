#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of list
 * @head: pointer to pointer to listint_t (double pointer)
 * @n: an integer
 *
 * Return: address to new elem, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodenew = malloc(sizeof(listint_t));

	if (nodenew == NULL)
		return (NULL);

	nodenew->n = n;
	nodenew->next = *head;

	*head = nodenew;

	return (nodenew);
}
