#include"main.h"

/**
 * print_most_numbers - check if c is upper
 *
 * Return: always 0(success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			n++;
		_putchar(n + 48);
	}
	_putchar('\n');
}
