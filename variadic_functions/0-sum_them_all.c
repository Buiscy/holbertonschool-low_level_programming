#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int total = 0;
    unsigned int i;
    va_start (ap, n);


    for (i = 0; i < n; i++)
        total += va_arg(ap, int);
    
    va_end(ap);
    return (total);
    
}
