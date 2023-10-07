#include"main.h"
#include <stdlib.h>
/**
 * *mem - file memory
 *
 * @p: pointer
 * @c: input
 * @m: number of copy
 *
 * Return: pointer
*/

char *mem(char *p, char c, unsigned int m)
{
        unsigned int x;

        for (x = 0; x < m; x++)
                p[x] = c;
        return (p);
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
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == NULL)
		return (NULL);
	mem(p, 0, size * nmemp);
	return (p);
}
