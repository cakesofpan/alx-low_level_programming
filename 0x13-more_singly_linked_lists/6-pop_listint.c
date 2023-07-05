#include "lists.h"

/**
 * pop_listint - deletes the head node of list_int
 * @head: pointer to pointer to listint_t (double pointer)
 *
 * Return: head of n
 */
int pop_listint(listint_t **head)
{
	int value;

	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return (0);

	value = temp->n;
	*head = (*head)->next;
	free(temp);

	return (value);
}
