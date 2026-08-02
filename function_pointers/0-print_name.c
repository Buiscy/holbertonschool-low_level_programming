#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - takes function pointer and character pointer
* @name: Pointer to a char name given
* @f: Pointer to the function to use
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);
}
