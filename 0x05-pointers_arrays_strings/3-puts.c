#include"main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: input parameter
 *
 * Return: nothing
*/

void _puts(char *str)
{
	do {
		_putchar(*str + 0);
		str++;
	} while (*str != '\0');
	_putchar('\n');
}
