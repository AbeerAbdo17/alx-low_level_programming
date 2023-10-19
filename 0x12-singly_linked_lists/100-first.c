#include "lists.h"
void print(void) __attribute__ ((constructor));
/**
 * print - print before the main function is executed.
*/
void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
