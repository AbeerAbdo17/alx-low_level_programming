#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: input
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *crr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	crr = ht->array[idx];
	while (crr)
	{
		if (strcmp(crr->key, key) == 0)
			return (crr->value);

		crr = crr->next;
	}

	return (NULL);
}

