#include <stdio.h>

int main(void)
	{
		char ch;
		/* remember, this is creating a new variable and specifying the type
		 */
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch != 'e' && ch != 'q')
				/*Specifying that as long as ch does NOT equal e or q then print within the if statement
				 */
				putchar(ch);
		}
		putchar('\n');
		return(0);
	}
