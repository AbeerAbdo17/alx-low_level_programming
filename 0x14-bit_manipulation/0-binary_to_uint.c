#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dnum = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		 dnum = dnum * 2 + (*b++ - 48);
	}
	return (dnum);
}
