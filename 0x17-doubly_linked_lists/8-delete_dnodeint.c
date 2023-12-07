#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer
 * @index: Index
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crr = *head, *tp;
	unsigned int xv = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = crr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(crr);
		return (1);
	}

	while (crr != NULL && xv < index)
	{
		crr = crr->next;
		xv++;
	}

	if (crr == NULL)
		return (-1);

	tp = crr->prev;
	tp->next = crr->next;

	if (crr->next != NULL)
		crr->next->prev = tp;

	free(crr);

	return (1);
}

