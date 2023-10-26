#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input
 */
void print_binary(unsigned long int n)
{
	int x, size, b, zero = 1;

	size = sizeof(unsigned long int) * 8;
	for (x = size - 1; x >= 0; x--)
	{
		b = (n >> x) & 1;

		if (b == 1)
			zero = 0;
		if (!zero)
			_putchar(b + '0');
	}
	if (zero)
		_putchar('0');
}
