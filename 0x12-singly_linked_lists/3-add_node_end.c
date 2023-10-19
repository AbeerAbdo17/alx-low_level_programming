#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: input
 * @str: input
 *
 * Return: list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *item = *head;

        if (head == NULL || newnode == NULL)
                return (NULL);
        if (str != NULL)
        {
                newnode->str = strdup(str);
                if (newnode->str == NULL)
                {
                        free(newnode);
                        return (NULL);
                }
        }
	if (item != NULL)
	{
		while (item->next != NULL)
			item = item->next;
		item->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
