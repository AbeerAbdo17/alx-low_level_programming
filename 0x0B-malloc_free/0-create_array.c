#include"main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @c: input
 * @size: input
 *
 * Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *x = (char *)malloc(size(char));

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = x;
	return (x);
}
