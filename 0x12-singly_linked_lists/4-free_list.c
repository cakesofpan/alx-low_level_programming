#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list_t (struct list_s alias)
 *
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		list_t *temp = ptr;

		ptr = ptr->next;
		free(temp->str);
		free(temp);
	}
}
