#include"main.h"

/**
 * rev_string - everses a string.
 *
 * @s: input parameter
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = -1; s[i] != '\0'; i++)
		;
	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[j];
		s[j] = tmp;
	}
}
