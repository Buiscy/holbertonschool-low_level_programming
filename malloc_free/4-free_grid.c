#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height);
{
	int i;

	if (grid == NULL)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid)

}
