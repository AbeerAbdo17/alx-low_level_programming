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
	char *pon;
	size_t x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pon = malloc(size * nmemb);
	if (pon == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		pon[x] = 0;
	return (pon);
}
