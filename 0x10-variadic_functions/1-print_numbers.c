#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers, followed by a new line
 *
 * @separator: input
 * @n: input
 * @...: inputs
 *
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list p;

	va_start(p, n);
	while (x < n)
	{
		printf("%d%s", va_arg(p, int), separator ? separator : "");
		x++;
	}
	printf("\n");
	va_end(p);
}
