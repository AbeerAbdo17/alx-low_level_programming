#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer
 * @idx: Index
 * @n: Value
 *
 * Return: The address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw, *crr = *h;
	unsigned int xv = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (crr != NULL && xv < idx - 1)
	{
		crr = crr->next;
		xv++;
	}

	if (crr == NULL)
		return (NULL);

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = crr;
	nw->next = crr->next;

	if (crr->next != NULL)
		crr->next->prev = nw;

	crr->next = nw;

	return (nw);
}
