#include"main.h"

/**
 *  *_strdup -  returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter
 *
 *  @str: input
 *
 *  Return: NULL if str = NULL
 *  On success returns a point
*/

char *_strdup(char *str)
{
	int x = 0, s = 0;
	char *ptr;

	if (str == 0)
		return (NULL);

	while (str[s] != '\0')
	{
		s++;
	}
	ptr = malloc(s * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		while (x < s)
		{
			ptr[x] = str[x];
			x++;
		}
	}

	return (ptr);
}
