#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
    int i;
    int b;
    if (size <= 0)
    {
        _putchar('\n');
    }
    else

        for (i = 0; i < size; i++)
        {
            for (b = 0; b <= i; b++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
}