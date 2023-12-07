#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer
 * @n: Value
 *
 * Return: address or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *tp;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
			tp = tp->next;

		tp->next = nw;
		nw->prev = tp;
	}

	return (nw);
}

