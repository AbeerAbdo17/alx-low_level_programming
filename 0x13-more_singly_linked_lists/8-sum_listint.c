#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: input
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sumtmp = 0;

	while (head != NULL)
	{
		sumtmp = sumtmp + head->n;
		head = head->next;
	}
	return (sumtmp);
}
