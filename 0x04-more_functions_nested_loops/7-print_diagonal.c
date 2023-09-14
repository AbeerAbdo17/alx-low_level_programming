#include"main.h"

/**
 * print_diagonal - draws a diagonal  line
 *
 * @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int len, spece;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (len = 1; len <= n; len++)
		{
			for (spece = 1; spece <= n; spece++)
			{
				if (spece == len)
					_putchar(92);
				else if (spece < len)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
