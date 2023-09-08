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
	int number = 0;

	while (number <= 9)
	{
		printf('\i', number);
		number++;
	}
	printf('\n');
	return (0);


}
