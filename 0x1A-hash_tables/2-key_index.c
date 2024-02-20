#include "hash_tables.h"

/**
 * key_index - gives index of a key. uses djb2 algorithm
 * @key: a key
 * @size: size of array
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
