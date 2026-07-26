#include "main.h"
#include <stdlib.h>
/**
* Create & returns pointer to copied array
* @str_concat: returns a concatinated string
* @i: stores the first string
* @j: stores the second string
* @z: stores total length of both strings
* Returns a pointer to a copy of a str with allocated memory.
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int z;
	char *s3;

	i = 0, j = 0;

	while (s1 !=  NULL && s1[i] != '\0')
		i++;

	while (s2 !=  NULL && s2[j] != '\0')
		j++;

	z = i + j;
	s3 = malloc((z + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	i = 0, j = 0;

	while (s1 !=  NULL && s1[i] !=  '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2 !=  NULL && s2[j] !=  '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);

}
