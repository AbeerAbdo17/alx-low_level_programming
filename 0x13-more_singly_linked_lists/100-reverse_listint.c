#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: input
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prenod = NULL, *nexnod = NULL;

	while (*head != NULL)
	{
		nexnod = (*head)->next;
		(*head)->next = prenod;
		prenod = *head;
		*head = nexnod;
	}
	*head = prenod;
	return (*head);
}
