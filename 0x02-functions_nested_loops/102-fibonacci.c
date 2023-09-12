#include<stdio.h>

/**
 * main - enty point
 *
 * Return: always 0(success)
*/

int main(void)
{
	int long fib1 = 0, fib2 = 1, sum;

	for (int i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf('\n');
		else
			printf(", ");
	}
	return (0);
}
