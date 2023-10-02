#include"main.h"

/**
 * _islower - function to check char is lowercase
 *
 *@c: checks input
 *
 * Return: return 1 if c lower
 * otherwise always 0(success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
