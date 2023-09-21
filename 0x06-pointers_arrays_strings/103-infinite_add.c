#include"main.h"

/**
 * infinite_add - adds two numbers.
 *
 * @n1: input
 * @n2: input
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, large = 0, numn1, numn2, cryout = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i > j)
		large = i;
	else
		large = j;
	if (large + 1 > size_r)
		return (0);
	r[large] = '\0';
	for (k = large - 1; k >= 0; k--)
	{
		i--;
		j--;

		if (i >= 0)
			numn1 = n1[i] - '0';
		else
		       numn1 = 0;
		if (j >= 0)
			numn2 = n2[i] - '0';
		else
			numn2 = 0;
		r[k] = (numn1 + numn2 + cryout) % 10 + '0';
		cryout = (numn1 + numn2 + cryout) / 10;
	}
	if (cryout == 1)
	{
		r[large + 1] = '\0';
		if (large + 2 > size_r)
			return (0);
		while (large-- >= 0)
			r[large + 1] = r[large];
		r[0] = cryout + '\0';
	}
	return (r);
}
