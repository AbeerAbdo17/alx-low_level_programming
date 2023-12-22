#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size array
 * Return: A pointer or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_table;
	unsigned long int x;

	nw_table = malloc(sizeof(hash_table_t));
	if (nw_table == NULL)
		return (NULL);
	nw_table->size = size;
	nw_table->array = malloc(sizeof(hash_node_t *) * size);
	if (nw_table->array == NULL)
	{
		free(nw_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		nw_table->array[x] = NULL;
	return (nw_table);
}
