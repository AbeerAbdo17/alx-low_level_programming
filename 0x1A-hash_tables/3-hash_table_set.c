#include "hash_tables.h"
hash_node_t *mak_Nod(const char *k, const char *v);
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update
 * @key: input
 * @value: input
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hnod, *xtp;
	char *nval;

	if (ht == NULL || key == NULL || *key == '\0')
		 return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	xtp = ht->array[idx];
	while (xtp != NULL)
	{
		if (strcmp(xtp->key, key) == 0)
		{
			nval = strdup(value);
			if (nval == NULL)
				return (0);
			free(xtp->value);
			xtp->value = nval;
			return (1);
		}
		xtp = xtp->next;
	}
	hnod = mak_Nod(key, value);
	if (hnod == NULL)
		return (0);
	hnod->next = ht->array[idx];
	ht->array[idx] = hnod;
	return (1);
}
/**
 * mak_nod - creat node
 * @k: key
 * @v: value
 * Return: new nod
*/
hash_node_t *mak_Nod(const char *key, const char *value)
{
	hash_node_t *xn;

	xn = malloc(sizeof(hash_node_t));
	if (!xn)
		return (NULL);
	xn->key = strdup(key);
	if (xn->key == NULL)
	{
		free(xn);
		return (NULL);
	}
	xn->value = strdup(value);
	if (xn->value == NULL)
	{
		free(xn->key);
		free(xn);
		return (NULL);
	}
	xn->next = NULL;
	return (xn);
}
