#include "main.h"

/**
 * free_grid - frees the memory allocated by a 2D array
 *
 * @grid: the 2D array
 * @height: height of the 2D array
 * Return: a pointer if true else NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
