#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: input
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (x);
}
