#include"main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s:input
 * @b:input
 * @n: input
 *
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int rep;

	for (rep = 0; n > 0; rep++, n--)
		s[rep] = b;
	return (s);
}
