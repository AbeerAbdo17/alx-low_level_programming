#include"main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 *
 * Description: print 10 times alphabet
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
