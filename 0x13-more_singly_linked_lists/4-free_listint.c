#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list
 *
 * Return: NULL on failure
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
			head = new;
	}
}
