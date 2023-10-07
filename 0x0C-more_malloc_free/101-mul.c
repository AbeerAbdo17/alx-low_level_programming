#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check - digid or non digid
 * @c: input*
 * Return: 0 or 1
*/
int check(char *c)
{
	int x = 0;

	while (c[x])
	{
		if (c[x] < '0' || c[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * len - return length
 * @c: input
 * Return: length
*/
int len(char *c)
{
	int x = 0;

	while (c[x] != '\0')
		x++;
	return (x);
}
/**
 * err - handel error
*/
void err(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main -  multiplies two positive numbers
 * @argc: input
 * @argv: input
 * Return: noyhing
*/
int main(int argc, char **argv)
{
	char *st1, *st2;
	int lens1, lens2, l, x, crr, d1, d2, *res, b = 0;

	st1 = argv[1], st2 = argv[2];
	if (argc != 3 || !check(st1) || !check(st2))
		err();
	lens1 = len(st1);
	lens2 = len(st2);
	l = lens1 + lens2 + 1;
	res = malloc(sizeof(int) * l);
	if (res == NULL)
		return (1);
	for (x = 0; x <= lens1 + lens2; x++)
		res[x] = 0;
	for (lens1 = lens1 - 1; lens1 >= 0; lens1--)
	{
		d1 = st1[lens1] - '0';
		crr = 0;
		for (lens2 = len(st2) - 1; lens2 >= 0; lens2--)
		{
			d2 = st2[lens2] - '0';
			crr = crr + res[lens1 + lens2 + 1] + (d1 * d2);
			res[lens1 + lens2 + 1] = crr % 10;
			crr = crr / 10;
		}
		if (crr > 0)
			res[lens1 + lens2 + 1] = res[lens1 + lens2 + 1] + crr;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (res[x])
			b = 1;
		if (b)
			_putchar(res[x] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
