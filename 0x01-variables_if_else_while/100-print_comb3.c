#include<stdio.h>

/**
 * main - entry point
 *
 * Description: all possible different combinations of two digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
