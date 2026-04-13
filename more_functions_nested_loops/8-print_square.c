#include "main.h"

void print_square(int size)
{
	if (size < 1)
	{ 
		_putchar(10);
	}
	else
	{

		int i;

		for ( i = 0; i < size; i++)
		{
			int j;

			for (j = 1; j < size; j++)
			{

				_putchar(35);
			}

			_putchar(10);

		}

	}
}
