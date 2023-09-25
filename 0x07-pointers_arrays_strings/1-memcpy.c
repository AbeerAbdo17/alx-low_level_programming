#include"main.h"

/**
 * _memcpy - copies memory area
 *
 * @n: input
 * @dest: input
 * @src: input
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int rep;

	for (rep = 0; rep < n; rep++)
		dest[rep] = src[rep];
	return (dest);
}
