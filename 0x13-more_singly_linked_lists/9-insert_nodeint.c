#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: input
 * @idx: input
 * @n: input
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *newnod, *tmpitem;

	newnod = malloc(sizeof(listint_t));
	tmpitem = *head;
	if (newnod == NULL || head == NULL)
		return (NULL);
	newnod->n = n;
	newnod->next = NULL;

	if (!idx)
	{
		newnod->next = *head;
		*head = newnod;
		return (newnod);
	}
	while (tmpitem != NULL && x < idx)
	{
		if (x == idx - 1)
		{
			newnod->next = tmpitem->next;
			tmpitem->next = newnod;
			return (newnod);
		}
		tmpitem = tmpitem->next;
		x++;
	}
	return (NULL);
}
