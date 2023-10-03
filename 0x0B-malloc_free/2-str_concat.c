#include"main.h"

/**
 * length - length of string
 *
 * @s: input
 *
 * Return: length
*/

int length(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * *str_concat -  concatenates two strings
 *
 * @s1: input
 * @s2: input
 *
 * Return: pointer point to a newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	int x1, x2, j = 0;
	char *ptr;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";

	x1 = length(s1);
	x2 = length(s2);
	ptr = malloc((x1 + x2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);
	while (j <= x1 + x2)
	{
		if (j < x1)
			ptr[j] = s1[j];
		else
			ptr[j] = s2[j - x1];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
