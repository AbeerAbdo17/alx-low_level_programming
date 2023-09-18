#include"main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: input
 * @src:input
 *
 * Return:pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		x++;
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
