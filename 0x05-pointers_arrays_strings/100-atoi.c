#include"main.h"

/**
 * _atoi -  convert a string to an integer.
 *
 * @s: input
 *
 * Return: convert integer from string
*/

int _atoi(char *s)
{
	int number = 0;
	int si = 1;

	do {
		if (*s == '-')
			si = si * -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);
	return (number * si);
}
