#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: input
 * @index: input
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmpitem = head;
	unsigned int x = 0;

	while (tmpitem != NULL && x < index)
	{
		tmpitem = tmpitem->next;
		x++;
	}
	return (tmpitem);
}
