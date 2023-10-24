#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to find length for
 *
 * Return: length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int t;

	for (t = 0; str[t]; t++)
		;
	return (t);
}

/**
 * add_node_end - adds new node at the end of list_t list
 * @head: pointer to pointer to list_t (i.e a double pointer)
 * @str: a string
 *
 * Return: new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodenew, *tmp;

	if (str == NULL)
		return (NULL);

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->str = strdup(str);
	if (nodenew->str == NULL)
	{
		free(nodenew);
		return (NULL);
	}
	nodenew->len = _strlen(nodenew->str);
	nodenew->next = NULL;

	if (*head == NULL)
	{
		*head = nodenew;
		return (nodenew);
	}
	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nodenew;
	return (nodenew);
}
