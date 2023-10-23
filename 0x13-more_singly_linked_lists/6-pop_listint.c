#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: input
 * Return:  head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmpitem;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	tmpitem = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = tmpitem;
	return (x);
}
