#include"main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: input
 * @max: input
 *
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int length, x;
	int *p;

	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (x = 0; x < length; x++)
	{
		p[x] = min++;
	}
	return (p);
}
