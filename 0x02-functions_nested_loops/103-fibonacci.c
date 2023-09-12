#include<stdio.h>

/**
 * main - find and print sum of even value
 * Return: always 0 (success)
*/
int main(void)
{
	int i;
	long int fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total = total + sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
