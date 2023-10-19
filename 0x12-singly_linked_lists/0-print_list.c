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
	size_t numcount= 0;

	while (h)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)");
			printf("\n");
		}
		else
		{
			printf("%s", h->str);
			printf("\n");
		}
		h = h->next;
		numcount++;
	}
	return (numcount);
}
