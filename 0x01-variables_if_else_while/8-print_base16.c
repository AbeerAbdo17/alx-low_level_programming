#include<stdio.h>

/**
 * main - entry point
 *
 * Description: numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (number = 97; number < 103; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);

}
