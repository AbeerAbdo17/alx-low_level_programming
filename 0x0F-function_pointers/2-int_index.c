#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: input
 * @size:is the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}
