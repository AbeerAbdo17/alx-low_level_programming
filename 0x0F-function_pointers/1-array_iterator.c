#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: input
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;

	if (array && action)
		while (x < size)
		{
			action(array[x]);
			x++;
		}
}
