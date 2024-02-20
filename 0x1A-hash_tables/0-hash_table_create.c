#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to hash table else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;
	unsigned long int t;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);

	newhash->size = size;
	newhash->array = malloc(sizeof(hash_node_t *) *size);
	if (newhash->array == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		newhash->array[t] = NULL;

	return (newhash);
}
