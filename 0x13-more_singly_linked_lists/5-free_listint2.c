#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: input
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpitem;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmpitem = (*head)->next;
		free(*head);
		*head = tmpitem;
	}
	*head = NULL;
}
