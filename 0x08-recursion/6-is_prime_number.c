#include"main.h"
#include<stdio.h>

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: input
 * @v: input
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
*/

int prime(int n, int v);
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - prime number
 *
 * @n: input
 * @v: input
 *
 * Return: 0 or 1
*/

int prime(int n, int v)
{
	if (v >= n &&  n >= 2)
		return (1);
	else if (n % v == 0 || n <= 1)
		return (0);
	else
		return (prime(n, v + 1));
}
