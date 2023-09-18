#include"main"

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

	while (*s++)
	{
		if (*s == '-')
			si = si * -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		els if (number > 0)
			break;
	}
	return (number * si);
}
