#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: input
 * @str: input
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnod;
	unsigned int len = 0;

	while (str[len])
		len++;
	newnod = malloc(sizeof(list_t));
	if (head == NULL || newnod == NULL)
		return (NULL);
	newnod->str = strdup(str);
	newnod->len = len;
	newnod->next = *head;
	*head = newnod;
	return (newnod);

}
