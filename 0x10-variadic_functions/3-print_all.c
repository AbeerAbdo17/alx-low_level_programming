#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: input
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *p = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 's':
					s = va_arg(l, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", s, p);
					break;
				default:
					x++;
					continue;
			}
			p = ", ";
			x++;
			}
		}
	printf("\n");
	va_end(l);
}
