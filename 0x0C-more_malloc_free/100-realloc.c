#include"main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: input
 * @old_size: input
 * @new_size: inpu
 *
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pon;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pon = malloc(new_size);
		if (pon == NULL)
			return (NULL);
		return (pon);
	}
	if (new_size > old_size)
	{
		pon = malloc(new_size);
		if (pon == NULL)
			return (NULL);
		x = 0;
		while (x < old_size && x < new_size)
		{
			*((char *)pon + x) = *((char *) ptr + x);
			x++;
		}
		free(ptr);
	}
	return (pon);
}
