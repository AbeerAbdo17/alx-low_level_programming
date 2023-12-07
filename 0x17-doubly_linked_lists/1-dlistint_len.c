#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t xv = 0;

	while (h != NULL)
	{
		h = h->next;
		xv++;
	}

	return (xv);
}
