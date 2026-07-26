#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *array;
	int j;
	int b;
	int range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	array = malloc(range * sizeof(*array));

	if (array == NULL)
		return (NULL);

	j = 0;
	b = min;
	while (j < range)
	{
		array[j] = b;
		b++;
		j++;
	}
	return (array);
}
