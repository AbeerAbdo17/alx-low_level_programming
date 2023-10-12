#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 *
 * @n: input
 * @...: inputs
 *
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0, y = 0;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (y < n)
	{
		x = x + va_arg(p, int);
		y++;
	}
	va_end(p);
	return (x);
}
