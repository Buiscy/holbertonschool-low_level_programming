#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned i;
    int b = 0;
    va_list ap;

    va_start (ap, n);
    while (i < n)
    {
        printf("%d", b);
        b = va_arg(ap, int);
        
        if ( i < n - 1)
            printf("%s", separator);
        
        i++;

    }
    printf("\n");
    va_end (ap);

}