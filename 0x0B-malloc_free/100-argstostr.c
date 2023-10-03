#include"main.h"

/**
 * length - length of string
 *
 * @c: input
 *
 * Return: length
*/

int length(char *c)
{
	int s = 0;

	while (c[s] != '\0')
	{
		s++;
	}
	return (s);
}

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: input
 * @av: input
 *
 * Return: pointer
*/

char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, n = 0, c = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		n = n + length(av[x]);
		x++;
		n++;
	}

	ptr = malloc(sizeof(char) * n + 1);

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < ac ; x++)
	{
		while (av[x][y] != '\0')
		{
			ptr[c] = av[x][y];
			y++;
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	ptr[c] = '\0';
	return (ptr);

}
