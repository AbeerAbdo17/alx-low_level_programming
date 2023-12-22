#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: input
 * @size: input
 *  Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_val;

	if (key == NULL || size == 0)
		return (0);
	h_val = hash_djb2(key);
	return (h_val % size);
}

