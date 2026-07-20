#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array using malloc
* @size: the size of array
* @c: character to fill array
* Return: a pointer to the created array or null if failed
*/

char *create_array(unsigned int size, char c)
{

	char *create;
	unsigned int i;

	if (size < 1)
		return (NULL);

	create = malloc(size * sizeof(char));

	if (create == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		create[i] = c;
		i++;
	}
	return (create);

}
