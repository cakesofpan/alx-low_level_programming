#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: a character
 *
 * Return: value of t
 */
int _strlen(const char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

/**
 * add_node - add a node at beginning of list
 * @head: head of list
 * @str: data to insert
 *
 * Return: no of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
