#include "lists.h"
/**
 * free_list - frees a list_t list
 *
 * @head: input
*/
void free_list(list_t *head)
{
	list_t *fitem;

	while (head != NULL)
	{
		fitem = head->next;
		free(head->str);
		free(head);
		head = fitem;
	}
}
