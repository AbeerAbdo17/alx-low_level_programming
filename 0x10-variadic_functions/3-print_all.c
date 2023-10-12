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
		while (format && format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", p, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(l, double));
					break;
				case 'i':
					printf("%s%d", p, va_arg(l, int));
					break;
				case 's':
					s = va_arg(l, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", p, s);
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
