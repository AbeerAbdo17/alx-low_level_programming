#include"main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size:  the size of the triangle
*/

void print_triangle(int size)
{
	 int row, colum;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (colum = 1; colum <= size; colum++)
			{
				if ((row + colum) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
