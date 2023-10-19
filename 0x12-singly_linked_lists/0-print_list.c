#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: head pointer
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)");
			printf("\n");
		}
		else
		{
			printf("[%d]%s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
		x++;
	}
	return (x);
}
