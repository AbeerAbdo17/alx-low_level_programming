#include"main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: input
 * @height: input
 *
 * Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **arr, x = 0, y = 0;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		while (x < height)
		{
			arr[x] = malloc(sizeof(**arr) * width);
			if (arr[x] == 0)
			{
				while (x--)
					free(arr[x]);
				free(arr);
				return (NULL);
			}
			while (y < width)
			{
				arr[x][y] = 0;
				y++;
			}
			x++;
		}
	}
	return (arr);
}
