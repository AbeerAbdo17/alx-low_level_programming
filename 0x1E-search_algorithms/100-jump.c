#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: indx
 */
int jump_search(int *array, size_t size, int value)
{
	int indx, xm, xk, xprev;

	if (array == NULL || size == 0)
		return (-1);

	xm = (int)sqrt((double)size);
	xk = 0;
	xprev = indx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
			return (indx);
		xk++;
		xprev = indx;
		indx = xk * xm;
	} while (indx < (int)size && array[indx] < value);

	printf("Value found between indexes [%d] and [%d]\n", xprev, indx);

	for (; xprev <= indx && xprev < (int)size; xprev++)
	{
		printf("Value checked array[%d] = [%d]\n", xprev, array[xprev]);
		if (array[xprev] == value)
			return (xprev);
	}

	return (-1);
}
