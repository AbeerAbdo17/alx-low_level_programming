#include"main.h"

/**
 *  print_buffer -  function that prints a buffer.
 *
 *  @b: input
 *  @size: input
 *
 *  Return: 0 success
*/

void print_buffer(char *b, int size)
{
	int k, m, n;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		m = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + k + n));
			else
				printf("  ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int v = *(b + k + n);

			if (v < 32 || v > 132)
			{
				v = '.';
			}
			printf("%c", v);
		}
		printf("\n");
		k = k + 10;
	}
}
