#include "main.h"
#include <stdlib.h>

/**
* @_strdup: - returns pointer
* @i: used to count through the str
* @count: used to hold the length of a string before \0
* @strcopy: is the copied array
*/

char *_strdup(char *str)
{
	int i;
	int count;
	char *strcopy;

	count = 0;

	for (i = 0 ; str[i] != '\0'; i++)
		count++;

	strcopy = malloc(count * sizeof(char));
	
	if (strcopy == NULL)
		return (NULL);

	for (i = 0 ; i < count; i++)
		strcopy[i] = str[i];

	return (strcopy);
}
