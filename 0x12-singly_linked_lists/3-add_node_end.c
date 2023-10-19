#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: input
 * @str: input
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnod;
	unsigned int len = 0;
	list_t *temitem = *head;

	while (str[len])
		len++;
	newnod = malloc(sizeof(list_t));
	if (newnod == NULL)
		return (NULL);
	newnod->str = strdup(str);
	newnod->len = len;
	newnod->next = NULL;

	if (*head == NULL)
	{
		*head = newnod;
		return (newnod);
	}
	while (temitem->next)
		temitem = temitem->next;
	temitem->next = newnod;
	return (newnod);
}
