#include "main.h"


int length (char *b);
void rev_string(char *s)
{
	int i = 0;
	int j = length(s) - 1;
	char t; 

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;

		i++;
		j--;
	}
}





int length (char *b)
{
	int f = 0;
	while (b[f] != '\0')
	{
		++f;
	}
	return (f);
}
