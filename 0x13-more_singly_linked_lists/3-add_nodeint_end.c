#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 *
 * @head: input
 * @n: input
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnod;
	listint_t *temitem = *head;

	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);
	newnod->n = n;
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
