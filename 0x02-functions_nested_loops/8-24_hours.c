#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 1; i <= 24; i++)
	{
		for (j = 1; j <= 60; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}

}
