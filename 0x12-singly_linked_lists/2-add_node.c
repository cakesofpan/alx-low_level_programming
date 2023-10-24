#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: s is a character
 *
 * Return: value is t
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
 * add_node - adds new node at the beginning of list_t list
 * @head: pointer to pointer to list_t (i.e a double pointer)
 * @str: a string
 *
 * Return: new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodenew = malloc(sizeof(list_t));

	if (nodenew == NULL)
		return (NULL);

	nodenew->str = strdup(str);

	nodenew->len = _strlen(str);
	nodenew->next = *head;

	*head = nodenew;

	return (nodenew);
}
