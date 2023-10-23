#include "lists.h"

/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list
 *
 * @head: start
 * @n: input
 *
 * Return: ddress of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod = malloc(sizeof(listint_t));

	if (newnod == NULL || head == NULL)
		return (NULL);
	newnod->n = n;
	newnod->next = *head;
	*head = newnod;

	return (newnod);
}
