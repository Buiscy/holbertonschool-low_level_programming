#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned i = 0;
    int b = 0;
    va_list ap;

    va_start (ap, n);
    while (i < n)
    {
        b = va_arg(ap, int);
        printf("%d", b);

        if ( i < n - 1 && separator != NULL)
            printf("%s", separator);
        
        i++;

    }
    printf("\n");
    va_end (ap);

}
