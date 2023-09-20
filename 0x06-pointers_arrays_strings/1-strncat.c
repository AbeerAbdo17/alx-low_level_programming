#include"main.h"

/**
 * _strncat -  function that concatenates two strings
 *
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
