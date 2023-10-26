#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: input
 * @index: input
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	m = 1 << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & m) == m)
		return (1);
	else
		return (0);
}
