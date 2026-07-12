#include "main.h"

int print_last_digit(int n)
{
    int i;

    if (n > 10)
    {
        i = (n % 10);
        _putchar (i + '0');
        return (i);
    }
    else if (n <= -1)
    {
        i = (n % 10);
        i = -i;
        _putchar (i + '0');
        return (i);
    }
    else
    {
        _putchar (n + '0');
        return (n);
    }
    return (0);
}
