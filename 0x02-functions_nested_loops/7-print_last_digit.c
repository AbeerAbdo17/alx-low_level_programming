#include"main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @n: take number
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	_putchar(last + 48);
	return (last);
}
