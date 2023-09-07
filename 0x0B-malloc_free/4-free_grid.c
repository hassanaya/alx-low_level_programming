#include "main.h"
#include <stdlib.h>

/**
 *free_grid - returns void
 *@grid: int
 *@height: char
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
