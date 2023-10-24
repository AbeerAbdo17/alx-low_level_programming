#include "lists.h"
size_t reall(const listint_t *head);
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: input
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodls, inditem = 0;

	nodls = reall(head);
	if (nodls == 0)
	{
		while (head != NULL)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
			nodls++;
		}
	}
	else
	{
		for (inditem = 0; inditem < nodls; inditem++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (nodls);
}
/**
 * reall - count
 * @head: input
 * Return: number
 */
size_t reall(const listint_t *head)
{
	const listint_t *tmpitem, *crritem;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tmpitem = head->next;
	crritem = (head->next)->next;

	while (crritem != NULL)
	{
		if (tmpitem == crritem)
		{
			tmpitem = head;
			while (tmpitem != crritem)
			{
				x++;
				tmpitem = tmpitem->next;
				crritem = crritem->next;
			}
			tmpitem = tmpitem->next;
			while (tmpitem != crritem)
			{
				x++;
				tmpitem = tmpitem->next;
			}
			return (x);
		}
		tmpitem = tmpitem->next;
		crritem = (crritem->next)->next;
	}
	return (0);
}
