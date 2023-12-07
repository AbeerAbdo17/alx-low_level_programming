#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * @head: Pointer
 *
 * Return: The sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int xsm = 0;
	dlistint_t *crr = head;

	while (crr != NULL)
	{
		xsm += crr->n;
		crr = crr->next;
	}

	return (xsm);
}

