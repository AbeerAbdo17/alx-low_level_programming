#include<stdio.h>

/**
 * main - entry point
 *
 * Description:  prints all possible different combinations of three digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (l = 0; l <= 9; l++)
			{
				if (n != m && n < m && m != l && m < l)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(l + 48);
					if (n + m + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
