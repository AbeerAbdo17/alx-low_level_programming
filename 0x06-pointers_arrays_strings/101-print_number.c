#include"main.h"

/**
 * print_number - prints an integer
 *
 * @n: input
 *
 * Return: 0 success
*/

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10 != 0)
		print_number(x / 10);

	_putchar((x % 10) + 48);
}
