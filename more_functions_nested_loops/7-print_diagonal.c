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
			int j = 0;
			while (j <= n)
			{
				if ( j < n)
				{	
				_putchar(32);
				j++;
				}
				else 
				{
					_putchar(92);
					break;
				}
			}
			_putchar(10);
			i++;
		}
		_putchar(10);
	}
}
