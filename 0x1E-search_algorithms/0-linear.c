#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *
 * @array: input
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t xv;

	if (array == NULL)
		return (-1);

	for (xv = 0; xv < size; xv++)
	{
		printf("Value checked array[%lu] = [%d]\n", xv, array[xv]);
		if (array[xv] == value)
			return (xv);
	}

	return (-1);
}
