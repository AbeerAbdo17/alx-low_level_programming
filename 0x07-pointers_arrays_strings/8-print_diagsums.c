#include"main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: input
 * @size: input
 *
 * Return: 0
*/

void print_diagsums(int *a, int size)
{
	int rep, sum1 = 0, sum2 = 0;

	for (rep = 0; rep < size; rep++)
	{
		sum1 = sum1 + a[rep];
		sum2 = sum2 + a[size - rep - 1];
		a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
