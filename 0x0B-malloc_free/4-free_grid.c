#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - introduces the code
 * @grid: first variable
 * @height: height variable
 * Description: frees memory of grid
 * Return: 0 success
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

