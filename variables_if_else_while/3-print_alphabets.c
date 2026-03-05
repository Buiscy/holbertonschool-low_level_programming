#include <stdio.h>

int main(void)
{
	char ch;
	/* remember, create the variable. Here its a char variable which can hold 1 Character: is very small in memory useage
	 */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
