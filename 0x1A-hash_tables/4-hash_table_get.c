#include "hash_tables.h"

/**
 * hash_table_get - retreives a value associated with a key
 * @ht: pointer to hash table
 * @key: key to be looked for
 *
 * Return: value associated with key, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int t;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	t = key_index((const unsigned char *) key, ht->size);
	if (t >= ht->size)
		return (NULL);

	node = ht->array[t];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
