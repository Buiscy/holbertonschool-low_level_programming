#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    int count;
    va_list ap;

    va_start(ap, format);
    count = 0;
    de

    while (*format != '/0')
    {
        if (*format == '%')
            count += print_format(*(++format), ap);
        else
            count += write(1, format, 1);
        
        ++format;

    }
    va_end(ap);
    return (count);

}