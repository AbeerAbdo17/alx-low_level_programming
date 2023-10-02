#include<stdio.h>
#include<stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argv: input
 * @argc: input
 *
 * Return: 0 or 1
*/

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0, least = 0, mon = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		while (x < 5)
		{
			if (mon >= cents[x])
			{
				least = least + mon / cents[x];
				mon = mon % cents[x];
				if (mon % cents[x] == 0)
				{
					break;
				}
			}
			x++;
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
