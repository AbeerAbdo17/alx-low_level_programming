#include"main.h"

/**
 * main - entry point
 *
 * Description: computes the sum
 *
 * Return: alwys 0(success)
*/

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s = s + n;
	}
	printf("%d\n", s);

	return (0);
}
