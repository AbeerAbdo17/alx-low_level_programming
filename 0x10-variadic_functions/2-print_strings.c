#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 *
 * @separator: input
 * @n: input
 * @...: inputs
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list p;
	char *s;

	va_start(p, n);
	while (x < n)
	{
		s = va_arg(p, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		printf("%d", va_arg(p, int));
		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(p);
}
