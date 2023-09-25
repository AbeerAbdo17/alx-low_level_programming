#include"main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: input
 * @accept: input
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != s[m]; n++)
		{
			if (accept[n] == '\0')
				return (m);
		}
	}
	return (m);
}
