#include"3-calc.h"

/**
 * main - main function
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	p = argv[2];
	y = atoi(argv[3]);

	if (!get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if ((*p == '/' && y == 0) || (*p == '%' && y == 0))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(p)(x, y));
	return (0);

}
