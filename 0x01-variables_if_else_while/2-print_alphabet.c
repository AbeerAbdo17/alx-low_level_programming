#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

char main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
