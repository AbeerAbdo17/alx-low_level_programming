#include"main.h"

/**
 * rev_string - reverse
 *
 * @n: input
 *
 * Return: 0
*/

void rev_string(char *n)
{
	int i = 0, j = 0;
	char t;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}

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
	int i = 0, j = 0, k = 0, tmp = 0, numn1 = 0, numn2 = 0, cryout = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || cryout == 1)
	{
		if (i < 0)
			numn1 = 0;
		else
			numn1 = *(n1 + i) - '0';
		if (j < 0)
			numn2 = 0;
		else
			numn2 = *(n2 + j) - '0';
		tmp = numn1 + numn2 + cryout;

		if (tmp >= 10)
			cryout = 1;
		else
			cryout = 0;

		if (k >= (size_r - 1))
			return (0);
		*(r + k) = (tmp % 10) + '0';
		k++;
		j--;
		i--;
	}
	if (k == size_r)
		return (0);
	*(r + k) = '\0';
	rev_string(r);
	return (r);
}
