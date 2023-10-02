#include<stdio.h>
#include<stdlib.h>

/**
 * main -  program that multiplies two numbers
 *
 * @argc: input
 * @argv: input
 *
 * Return: 1
*/

int main(int argc, char **argv)
{
	int tm;

	if (argc == 3)
	{
		tm = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", tm);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
