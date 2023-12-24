#include "hash_tables.h"

/**
 * shash_table_create - Creates table.
 * @size: input
 *
 * Return: null or value
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * find_node - finde node
 * @shead: input
 * @key: input
 * Return: null or value
 */
shash_node_t *find_node(shash_node_t *shead, const char *key)
{
	shash_node_t *current = shead;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current);
		current = current->snext;
	}
	return (NULL);
}

/**
 * shash_table_set - Adds an element
 * @ht: A pointer
 * @key:input
 * @value: input
 *
 * Return:  0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *value_copy = strdup(value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *existing_node = find_node(ht->shead, key);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	if (value_copy == NULL)
		return (0);

	if (existing_node != NULL)
	{
		free(existing_node->value);
		existing_node->value = value_copy;

	}
	else
	{
		add(ht, key, value_copy, index);
	}

	return (1);
}
/**
 * add - andd new nod
 * @ht: input
 * @k: input
 * @v: input
 * @x: input
 */
void add(shash_table_t *ht, const char *k, char *v, unsigned long int x)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));
	shash_node_t *tmp = ht->shead;

	if (new == NULL)
		free(v);
	new->key = strdup(k);
	if (new->key == NULL)
	{
		free(v);
		free(new);
	}
	new->value = v;
	new->next = ht->array[x];
	ht->array[x] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, k) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		while (tmp->snext != NULL && strcmp(tmp->snext->key, k) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
}
/**
 * shash_table_get - Retrieve the value
 * @ht: A pointer
 * @key: The key
 * Return: NULL or value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - Prints hash table in order.
 * @ht: A pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints hash in reverse order.
 * @ht: A pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes table.
 * @ht: A pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tp;
	}

	free(head->array);
	free(head);
}
