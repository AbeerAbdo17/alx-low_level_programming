#include"main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: input
 * @accept: input
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int m, n;
	char *l;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[m])
			{
				l = &s[m];
				return (l);
			}
		}
	}
	return (0);
}
