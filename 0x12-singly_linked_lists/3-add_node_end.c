#include "lists.h"

/**
 * _strlens - finds length of a string
 * @str: string to find the length of
 *
 * Return: length of a string
 */
unsigned int _strlens(char *str)
{
	unsigned int t;

	for (t = 0; str[t]; t++)
		;

	return (t);
}

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: double pointer to linked list
 * @str: string to add to new node
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlens(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
