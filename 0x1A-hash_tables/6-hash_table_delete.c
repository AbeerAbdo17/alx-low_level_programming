#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *crr, *xtp;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		crr = ht->array[x];
		while (crr)
		{
			xtp = crr->next;
			free(crr->key);
			free(crr->value);
			free(crr);
			crr = xtp;
		}
	}

	free(ht->array);
	free(ht);
}
