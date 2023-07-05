#include "lists.h"

/**
 * free_listint2 -frees a listint_t list
 * @head: pointer to pointer to listint_t (double pointer)
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{

	listint_t *now = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
	*head = NULL;
}
