#include "main.h"
/**
 *This Header specifies to be linked to a specific header within the directory with its own commands
 *
 * the following file prints "_putchar" letter by letter, but as one world
 * this is going to suck
 */
int main(void)
{
int i = 0;
	char s[]="_putchar";
		{
		for (i=0; s[i]!='\0';i++)
		_putchar(s[i]);

		}
	_putchar('\n');
	return (0);
}
