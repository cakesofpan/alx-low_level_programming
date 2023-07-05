#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *now = head;
	listint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
