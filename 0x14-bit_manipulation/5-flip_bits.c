#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: input
 * @m: input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int cou = 0;

	while (res > 0)
	{
		cou += res & 1;
		res = res >> 1;
	}
	return (cou);
}
