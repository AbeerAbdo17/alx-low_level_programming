#include"main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: input
 * @s2: input
 *
 * Return: 1 if true 0 if folse
*/

int _strcmp(char *s1, char *s2)
{
	int s = 0;

	while (s1[s] != '\0' && s2[s] != '\0')
	{
		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
		s++;
	}
	return (0);
}
