#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	const char *p;
	const char *s;
	va_list ap;
	const char *separator;
	
	separator = "";
	p = format;
	va_start (ap, format);

	while (p != NULL && *p != '\0')
		{
			switch(*p)
			{

				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					separator = ", ";
					break;
				
				case 'i':
					printf("%s%i", separator, va_arg(ap, int));
					separator = ", ";
					break;

				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					separator = ", ";
					break;

				case 's':
					s = va_arg(ap, char *);

					if  (s == NULL)
						s = "(nil)";

					printf("%s%s", separator, s);
					separator = ", ";
					break;

			}

			p++;

		}
	va_end(ap);
	printf("\n");
}
