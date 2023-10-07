#include"main.h"
#include <stdlib.h>

/**
 * print - print string
 *
 * @s: pointer
 *
 * Return: nothing
*/
void print(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		_putchar(s[x]);
}
/**
 * convert - convert string to intger
 * @x: input
 *
 * Return: convert
*/
int convert(char *x)
{
	int c = 1;
	unsigned long int r = 0, f, y;

	for (f = 0; !(x[f] >= 48 && x[f] <= 57); f++)
	{
		if (x[f] == '-')
			c = c * -1;
	}
	for (y = f; x[y] >= 48 && x[y] <= 57; y++)
	{
		r = r * 10;
		r = r + (x[y] - 48);
	}
	return (c * r);
}

/**
 * printint - print int
 *
 * @num: input
 *
 * Return: nothing
*/
void printint(unsigned long int num)
{
	unsigned long int d = 1, x = 0, r;

	while (num / d > 9)
	{
		x++;
		d = d * 10;
	}
	for (; d >= 1; n %= d, d /= 10)
	{
		r = num / d;
		_putchar(48 + r);
	}
}
/**
 * main - print result
 *
 * @argc: input
 * @argv: input list 
 *
 * Return: 0
*/
int main(int argc, char const **argv)
{
	(void)argc;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}

	printint(convert(argv[1]) * convert(argv[2]));
	_putchar('\n');

	return (0);
}
