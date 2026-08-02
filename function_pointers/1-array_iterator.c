#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - takes function pointer and character pointer
* @array: Pointer to a array given
* @size: size of function call
* @action: is the function being called
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
		{
			action(array[i]);
			i++;
		}
}
