#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;
	int *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		row = malloc(width * sizeof(int));

		if (row == NULL)
			return (NULL);

		j = 0;
		while (j < width)
		{
			row[j] = 0;
			j++;
		}

		grid[i] = row;
		i++;
	}

	return (grid);
}
