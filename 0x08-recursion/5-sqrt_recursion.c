#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input
 *
 * Return: natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - find square root
 *
 * @n: input
 * @x: input
 *
 * Return: square root
*/
int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (_sqrt(n, x + 1));
}
