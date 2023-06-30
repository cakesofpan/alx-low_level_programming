#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

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

	nodenew->str = strdup(str);
	nodenew->len = strlen(str);
	nodenew->next = *head;

	*head = nodenew;

	if (nodenew == NULL)
		return (NULL);

	return (*head);
}
