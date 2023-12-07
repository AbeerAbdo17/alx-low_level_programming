#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crr, *nxt;

	crr = head;
	while (crr != NULL)
	{
		nxt = crr->next;
		free(crr);
		crr = nxt;
	}
}

