#include "main.h"

void print_diagonal(int n)
{ 
	if (n < 0)
	{
		_putchar('\n');
	}
	else 
	{
		int i;
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);

		}
	}
}
