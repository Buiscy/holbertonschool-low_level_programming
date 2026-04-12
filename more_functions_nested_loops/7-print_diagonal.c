#include "main.h"

void print_diagonal(int n)
{ 
	if (n < 0)
	{
		_putchar('\n');
	}
	else 
	{
		int i = 0;
		while ( i <= n)
		{
			_putchar(32);
			i++;
		}
		_putchar(92);
		_putchar(10);
	}
}
