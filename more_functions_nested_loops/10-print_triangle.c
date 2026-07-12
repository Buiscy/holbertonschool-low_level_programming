#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
    int i;
    int b;
    int space;
    if (size <= 0)
    {
        _putchar('\n');
    }
    else

        for (i = 0; i < size; i++)
        {
	        for (space = 0; space < size - i - 1; space++)
	        {
		        _putchar(' ');
	        }
            for (b = 0; b <= i; b++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
}