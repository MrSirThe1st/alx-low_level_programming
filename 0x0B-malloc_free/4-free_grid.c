#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @heightf: height dimension of grid
 * Description: freefes memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int heightf)
{
	int i;

	for (i = 0; i < heightf; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

