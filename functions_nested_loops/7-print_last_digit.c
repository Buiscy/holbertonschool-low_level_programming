#include "main.h"

int print_last_digit(int n)
{
    int i;

    if (n > 10)
    {
        i = (n % 10);
        return (i);
    }
    else
        return (n);

}