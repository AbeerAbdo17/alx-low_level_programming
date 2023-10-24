#include "lists.h"
const listint_t **reall(const listint_t **oldlist, size_t sizelist, const listint_t *newlist);
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: input
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, numlist = 0;
	const listint_t **nlist = NULL;

	while (head)
	{
		for (x = 0; x < numlist; x++)
		{
			if (head == nlist[x])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(nlist);
				return (numlist);
			}
		}
		numlist++;
		nlist = reall(nlist, numlist, head);
		printf("[%p] %d \n", (void *)head, head->n);
		head = head->next;
	}
	free(nlist);
	return (numlist);
}
/**
 * reall - realloc memory
 *
 * @oldlist: input
 * @sizelist: input
 * @newlist: input
 *
 * Return: pointer
 */
const listint_t **reall(const listint_t **oldlist, size_t sizelist, const listint_t *newlist)
{
	const listint_t **neew;
	size_t x;

	neew = malloc(sizelist * sizeof(listint_t *));
	if (!neew)
	{
		free(oldlist);
		exit(98);
	}
	for (x = 0; x < sizelist - 1; x++)
	{
		neew[x] = oldlist[x];
	}
	neew[x] = newlist;
	free(oldlist);
	return (neew);
}
