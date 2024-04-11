#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: indx or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t xv, xleft, xright;

	if (array == NULL)
		return (-1);

	for (xleft = 0, xright = size - 1; xright >= xleft;)
	{
		printf("Searching in array: ");
		for (xv = xleft; xv < xright; xv++)
			printf("%d, ", array[xv]);
		printf("%d\n", array[xv]);

		xv = xleft + (xright - xleft) / 2;
		if (array[xv] == value)
			return (xv);
		if (array[xv] > value)
			xright = xv - 1;
		else
			xleft = xv + 1;
	}

	return (-1);
}
