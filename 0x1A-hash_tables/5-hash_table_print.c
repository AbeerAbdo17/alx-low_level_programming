#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *crr;
	int  fp = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		crr = ht->array[x];
		while (crr)
		{
			if (!fp)
				printf(", ");
			printf("'%s': '%s'", crr->key, crr->value);
			fp = 0;
			crr = crr->next;
		}
	}
	printf("}\n");
}

