#include "main.h"
#include <stdio.h>


int stleng (char *f);

void print_rev(char *f)
{
	int i = stleng(f);
	while (i >= 0)
	{
		putchar(f[i]);
		i--;
	}
	putchar(10);
}

int stleng (char *f)
{
	int b = 0; 
		   	
	while (f[b] != '\0')
	{
		b++;

	}
	return (b);
}
