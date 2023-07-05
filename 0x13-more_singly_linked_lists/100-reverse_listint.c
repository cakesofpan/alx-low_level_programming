#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to pointer to listint_t (double pointer)
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rested = (*head)->next;
	listint_t *rev_list = reverse_listint(&rested);

	(*head)->next->next = *head;
	(*head)->next = NULL;

	*head = rev_list;

	return (*head);
}
