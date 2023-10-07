#include"main.h"
#include <stdlib.h>
/**
 * *mem - file memory
 *
 * @p: pointer
 * @c: input
 * @m: max
 *
 * Return: pointer
*/

char *mem(char *p, char c, unsigned int m)
{
	char *x = p;

	while (m--)
		*p++ = c;
	return (x);
}

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
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == 0)
		return (NULL);
	mem(p, 0, sizeof(int) * nmemb);

	return (p);
}
