#include"main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 *
 * @grid: input
 * @height: input
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
