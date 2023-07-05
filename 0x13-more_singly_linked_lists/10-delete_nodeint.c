#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to pointer to listint_t (double pointer)
 * @index: index of node to be deleted
 *
 * Return: 1 on success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t = 0;

	listint_t *now = *head;
	listint_t *temp = now->next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (now != NULL && t < index - 1)
	{
		now = now->next;
		t++;
	}

	if (now == NULL || now->next == NULL)
		return (-1);

	now->next = temp->next;
	free(temp);

	return (1);
}
