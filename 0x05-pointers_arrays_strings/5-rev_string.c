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
	char tmp = s[0];

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
