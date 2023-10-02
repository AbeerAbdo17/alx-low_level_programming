#include<stdio.h>
#include<stdlib.h>
/**
 * main -  program that adds positive numbers
 *
 * @argc: input
 * @argv: input
 *
 * Return: 1 or 0
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
			if (*i < '0' || *i > '9')
				return (printf("Error\n"), 1);
			add = add + atoi(argv[argc]);
			i++;
		}
	}
	printf("%d\n", add);
	return (0);
}
