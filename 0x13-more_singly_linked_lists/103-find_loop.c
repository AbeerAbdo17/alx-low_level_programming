#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: input
 *
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *xl = head;

	listint_t *yt = head;

	if (head == NULL)
		return (NULL);

	while (xl != NULL && yt != NULL && yt->next != NULL)
	{
		yt = yt->next->next;
		xl = xl->next;
		if (yt == xl)
		{
			xl = head;

			while (xl != yt)
			{
				xl = xl->next;
				yt = yt->next;
			}
			return (yt);
		}
	}
	return (NULL);
}


