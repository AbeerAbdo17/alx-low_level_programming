#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 *
 * @h: input
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int x;
	listint_t *tmpitem;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmpitem = (*h)->next;
			free(*h);
			*h = tmpitem;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;
	return (leng);
}
