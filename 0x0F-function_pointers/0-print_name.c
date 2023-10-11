#include"function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: input
 * @f: input
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
