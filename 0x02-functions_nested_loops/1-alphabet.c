#include"main.h"

/**
 * print_alphabet - print a to z
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}

