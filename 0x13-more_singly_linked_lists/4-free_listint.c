#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: input
*/
void free_listint(listint_t *head)
{
	listint_t *tmpitem;

	while (head != NULL)
	{
		tmpitem = head->next;
		free(head);
		head = tmpitem;
	}
}
