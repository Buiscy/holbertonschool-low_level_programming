#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int b;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	j = 0;
	while (j < b)
	{
		i[j] = 0;
		j++;
	}

		return (i);

}
