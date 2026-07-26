#include "main.h"
#include <stdlib.h>

/**
* Create & returns pointer to copied array
* @_strdup: - returns pointer
* @i: used to count through the str
* @count: used to hold the length of a string before \0
* @strcopy: is the copied array
* Returns a pointer to a copy of a str with allocated memory.
*/
char *_strdup(char *str)
{
	int i;
	int count;
	char *strcopy;

	count = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0'; i++)
		count++;

	strcopy = malloc((count + 1) * sizeof(char));

	if (strcopy == NULL)
		return (NULL);

	for (i = 0 ; i < count; i++)
		strcopy[i] = str[i];

	return (strcopy);
}
