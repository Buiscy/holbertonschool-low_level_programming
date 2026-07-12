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
		int j;

		for (i = 0; i < size; i++)
		{


			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}

			_putchar(10);

		}

	}
}
