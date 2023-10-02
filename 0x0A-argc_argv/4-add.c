#include<stdio.h>
#include<stdlib.h>
/**
 * main -  program that adds positive numbers
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int add = 0;
	char *i;

	while (--argc)
	{
		i = argv[argc];
		while (*i)
		{
			if (*i < 48 || *i > 57)
				return (printf("Error\n"), 1);
			i++;
		}
		add = add + atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
