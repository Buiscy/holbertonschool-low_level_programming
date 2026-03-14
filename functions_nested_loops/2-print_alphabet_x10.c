#include "main.h"

void print_alphabet_x10(void)

	{
	int i = 0;
	char al;

	while(i <= 9 )
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
	i++;
	_putchar('\n');
	}
	_putchar('\n');
}
