#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list
 *
 * @h: input
 *
 * Return: num of element
*/
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
