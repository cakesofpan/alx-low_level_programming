#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer t hash table
 * @key: key to be added
 * @value: value associated with key'
 *
 * Return: 1 else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, t;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (t = index; ht->array[t]; t++)
	{
		if (strcmp(ht->array[t]->key, key) == 0)
		{
			free(ht->array[t]->value);
			ht->array[t]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
