#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input prameter
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');

}
