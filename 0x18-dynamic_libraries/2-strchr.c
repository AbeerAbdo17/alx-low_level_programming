#include"main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: input
 * @c: input
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int rep;

	for (rep = 0; s[rep] >= '\0'; rep++)
	{
		if (s[rep] == c)
			return (s + rep);
	}
	return ('\0');
}
