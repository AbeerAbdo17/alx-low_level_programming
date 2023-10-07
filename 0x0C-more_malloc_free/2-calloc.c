#include"main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: input
 * @size: input
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == NULL)
		return (NULL);
	else
		return (p);
}
