#include"main.h"
/**
 * length - return the length of string
 *
 * @n: input
 *
 * Return: number of  digit
*/
int length(int n)
{
	int len = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len = len + 1;
	}
	return (len);
}

/**
 * main - entry point
 *
 * Descriotion:print the first 98 fibonacci
 *
 * Return: always 0 (success)
*/

int main(void)
{

	int i, initial;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sum0 = 0;

	for (f10 > 0)
	{
		if (f10 > 0)
			printf("%lu", f10);
		initial = length(mx) - 1 - length(f1);
		while (f10 > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sum0 = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = sum;
		f20 = sum0;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
