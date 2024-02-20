#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a hash table
 *
 * Return: printed hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int t;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (t = 0; t < ht->size; t++)
	{
		if (ht->array[t] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[t];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
