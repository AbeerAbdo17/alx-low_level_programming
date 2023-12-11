#include"main.h"

/**
 * _strncpy -  function that copies a string.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
