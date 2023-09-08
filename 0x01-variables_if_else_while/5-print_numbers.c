#include <stdio.h>

/**
 * main - entry point
 *
 * Description: single digit numbers of base 10
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);


}
