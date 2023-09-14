#include<stdio.h>

/**
 * _sqrt - square root
 *
 * @n: input
 *
 * Return: square of x
*/

double _sqrt(double n)
{
	double sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * main - entry point
 *
 * Description: prints the largest prime factor of the number 612852475143
 *
 * Return: alwys 0 (success)
*/

int main(void)
{
	long int n, i, max;

	n = 612852475143;
	max = -1;
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= _sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);
	return (0);
}
