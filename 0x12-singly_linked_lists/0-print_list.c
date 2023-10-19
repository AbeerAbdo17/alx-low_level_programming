#include "lists.h"
/**
 * lens - length of string
 *
 * @xstr: input
 *
 * Return: len of xstr
 */
int lens(char *xstr)
{
	int x;

	if (xstr == NULL)
		return (0);
	for (x = 0; *xstr++; x++)
		;
	return (x);
}
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
		printf("[%u]%s\n", lens(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
