#include "lists.h"

/**
 * sum_listint - return sum of data(n)
 * @head: pointer to listint_t
 *
 * Return: sum of data in listint_t
 */
int sum_listint(listint_t *head)
{
	int sumn = 0;

	while (head != NULL)
	{
		sumn += head->n;
		head = head->next;
	}

	return (sumn);
}
