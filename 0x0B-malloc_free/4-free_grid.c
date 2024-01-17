#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -the function  Frees memory allocated to a 2D array
 * @grid: 2D array to be freed.
 * @height: Height dimension
 *
 * Description: The function isused to free the memory allocated to a 2D array.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
