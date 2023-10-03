#include"main.h"

/**
 * number - number of word in string
 *
 * @c: input
 *
 * Return: number
*/
int number(char *c)
{
	int x = 0, y = 0;

	while (c[x])
	{
		if (c[x] == ' ')
		{
			if (c[x + 1] != ' ' && c[x + 1] != '\0')
				y++;
		}
		else if (x == 0)
			y++;
		x++;
	}
	y++;
	return (y);
}
/**
 * **strtow -  splits a string into words
 *
 * @str: input
 *
 * Return: pointer
*/
char **strtow(char *str)
{
	int x = 0, y = 1, a = 0, b = 0, n = 0, c = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = number(str);
	if (n == 1)
		return (NULL);
	ptr = (char **)malloc(n * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[n - 1] = NULL;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			while (str[x + y] != ' ' && str[x + y])
				y++;
			y++;
			ptr[c] = (char *)malloc(y * sizeof(char));
			y--;
			if (ptr[c] == NULL)
			{
				for (a = 0; a < c; a++)
					free(ptr[a]);
				free(ptr[n - 1]);
				free(ptr);
				return (NULL);
			}
			for (b = 0; b < y; b++)
				ptr[c][b] = str[x + b];
			ptr[c][b] = '\0';
			c++;
			x = x + y;
		}
		else
			x++;
	}
	return (ptr);
}
