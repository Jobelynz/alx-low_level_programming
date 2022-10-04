#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_grid -  a function that frees a 2 dimensional grid
*   previously created by your alloc_grid function.
* @grid: ithe grid
* @height: height of grid
* Return: NULL on failure or width/height equals or 0 or negative
*/
void free_grid(int **grid, int height);
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
