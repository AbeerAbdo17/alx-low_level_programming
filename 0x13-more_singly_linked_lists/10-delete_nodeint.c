#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: input
 * @index: input
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpitem = *head;
	listint_t *currtmp;
	unsigned int x;

	if (!*head)
		return (-1);
	if (!index)
	{
		*head = (*head)->next;
		free(tmpitem);
		return (1);
	}
	for (x = 0; x < index - 1; x++)
	{
		if (tmpitem == NULL || tmpitem->next == NULL)
			return (-1);
		tmpitem = tmpitem->next;
	}
	currtmp = tmpitem->next;
	tmpitem->next = currtmp->next;
	free(currtmp);

	return (1);
}
