#include"function_pointers.h"

/**
 * main -  entry point
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0
*/
int main(int argc, *argv[])
{
	char *pt = (char *)main;
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (x--)
		printf("%02hhx", *pt++, x ? " " : "\n");
	return (0);
}
