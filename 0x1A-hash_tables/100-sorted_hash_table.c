#include "hash_tables.h"

/**
 * shash_table_create - creates table.
 * @size: number of array
 *
 * Return: pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}

/**
 * set_spair - sorted hash table.
 * @key: the key
 * @value: the value
 *
 * Return: pointer 
 */
shash_node_t *set_spair(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_spair_only -  first array element
 * @ht: pointer
 * @key: the key
 * @value: the value
 * @index: index.
 *
 * Return: node, or NULL
 */
shash_node_t *set_spaironly(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	ht->array[index] = node;
	return (node);
}

/**
 * update_value - updates the value
 * @node: pointer
 * @value: node.
 *
 * Return: 0 or 1
 */
int update_value(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);
	return (1);
}

/**
 * set_spair_front - sets  front of given index's list.
 * @ht: pointer
 * @key: the key
 * @value: the value
 * @index: index.
 *
 * Return:nw nod or null
 */
shash_node_t *spair_front(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (node);
}

/**
 * set_first - sets the first
 * @ht: pointer
 * @node: node
 *
 * Return: 1.
 */
int set_first(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 *  *  _set - sets a new node before the given old node.
 *   * @ht: pointer to the sorted hash table.
 *    * @old_node: the node to place the new node in front of.
 *     * @node: the new node to place in front of the old one.
 *      *
 *       * Return: Always 1 (success).
 */
int _set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
	if (old_node->sprev == NULL)
		ht->shead = node;
	node->snext = old_node;
	node->sprev = old_node->sprev;
	old_node->sprev = node;
	if (node->sprev != NULL)
		node->sprev->snext = node;
	return (1);
}

/**
 *  * set_end - sets a node at the end
 *   * @ht: pointer
 *    * @node: the node
 *     *
 *      * Return: 1
 */
int set_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = old_node;
	old_node->snext = node;
	return (1);
}

/**
 *  * shash_table_set - adds element
 *   * @ht: pointer
 *    * @key: the key
 *     * @value: the value
 *      * Return: 0 or 1
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *curr_old_node;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		node = set_spaironly(ht, key, value, index);
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (update_value(node, value));
			node = node->next;
		}
		node = spair_front(ht, key, value, index);
	}
	if (node == NULL)
		return (0); 
	if (ht->shead == NULL)
		return (set_first(ht, node));
	curr_old_node = ht->shead;
	while (curr_old_node != NULL)
	{
		if (strcmp(curr_old_node->key, node->key) >= 0)
			return (_set(ht, curr_old_node, node));
		curr_old_node = curr_old_node->snext;
	}
	return (set_end(ht, node));
}

/**
 *  * shash_table_get - retrieves key.
 *   * @ht: a pointer
 *    * @key: the key
 *     *
 *      * Return: the value ot null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 *  * shash_table_print - prints table order.
 *   * @ht: table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int x = 0;
	shash_node_t *node = ht->shead;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (x > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		x++;
	}
	printf("}\n");
}

/**
 *  * shash_table_print_rev - prints reverse.
 *   * @ht: table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int x = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (x > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		x++;
	}
	printf("}\n");
}

/**
 *  * shash_table_delete - deletes table
 *   * @ht: tab
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x = 0;
	shash_node_t *nde;

	while (x < ht->size)
	{
		while (ht->array[x] != NULL)
		{
			nde = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = nde;
		}
		x++;
	}
	free(ht->array);
	free(ht);
}
