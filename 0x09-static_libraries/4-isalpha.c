#include"main.h"

/**
 * _isalpha - checks is char is letter
 *
 * @c:take input
 *
 * Return: 1 if c true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
