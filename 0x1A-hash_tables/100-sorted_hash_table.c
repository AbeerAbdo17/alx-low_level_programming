#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * shash_table_create - Creates a sorted hash table
 *   * @size: The size of the array
 *    * Return: A pointer to the newly created sorted hash table, or NULL on failure
 *     */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 *  * shash_table_set - Inserts a key/value pair into the sorted hash table
 *   * @ht: The sorted hash table
 *    * @key: The key to insert
 *     * @value: The value to insert
 *      * Return: 1 on success, 0 on failure
 *       */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	/* Check if the key already exists, if yes, update the value */
	shash_node_t *current_node;
	shash_node_t *new_node;
	shash_node_t *prev = NULL;

	current_node = ht->shead;
	if (ht == NULL || key == NULL || *key == '\0')
		 return (0);
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->snext;
	}

	/* Create a new node */
        new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert the new node into the sorted linked list */
	current_node = ht->shead;

	while (current_node && strcmp(current_node->key, key) < 0)
	{
		prev = current_node;
		current_node = current_node->snext;
	}

	new_node->sprev = prev;
	new_node->snext = current_node;

	if (prev)
		prev->snext = new_node;
	else
		ht->shead = new_node;

	if (current_node)
		current_node->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
 *  * shash_table_get - Retrieves the value associated with a key in the sorted hash table
 *   * @ht: The sorted hash table
 *    * @key: The key to look for
 *     * Return: The value associated with the key, or NULL if key couldn’t be found
 *      */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node = ht->shead;
	 
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->snext;
	}

	return (NULL);
}

/**
 *  * shash_table_print - Prints the sorted hash table using the sorted linked list
 *   * @ht: The sorted hash table
 *    */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node = ht->shead;

	if (ht == NULL)
		return;

	printf("{");
	while (current_node)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
		if (current_node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print rev
 * @ht: input
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *crr = ht->stail;

	printf("{");
	while (crr)
	{
		printf("'%s': '%s'", crr->key, crr->value);
		crr = crr->sprev;
		if (crr)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete table
 * @ht: inpt
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *crr = ht->shead;
	shash_node_t *xtp;

	while (crr)
	{
		xtp = crr->snext;
		free(crr->key);
		free(crr->value);
		free(crr);
		crr = xtp;
	}

	free(ht->array);
	free(ht);
}

