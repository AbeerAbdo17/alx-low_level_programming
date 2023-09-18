#include"main.h"

/**
 * swap_int - unction that swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
