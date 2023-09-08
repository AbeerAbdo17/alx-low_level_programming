#include<stdio.h>

/**
 * main - entry point
 *
 * Description: possible combinations of single-digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
