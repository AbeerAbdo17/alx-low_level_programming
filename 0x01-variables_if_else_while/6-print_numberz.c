#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print number from 0-9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);

}
