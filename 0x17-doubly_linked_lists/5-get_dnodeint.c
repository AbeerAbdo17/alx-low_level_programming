#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer
 * @index: Index
 * Return: The nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int xv = 0;
	dlistint_t *crr = head;

	while (crr != NULL)
	{
		if (xv == index)
			return (crr);

		crr = crr->next;
		xv++;
	}

	return (NULL);
}
