#include"main.h"

/**
 * print_chessboard -  prints the chessboard.
 *
 * @a: input
 *
 * Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0;
	while (m < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		m++;
	}
}
