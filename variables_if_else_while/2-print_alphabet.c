#include <stdio.h>
/*
 * Above is the header that allows for inputs and outputs
 */
int main(void)
/* creating main function and declearing it a void. 
 * Can leave blank, same effect but saying void makes it clearly intentional
 */
{
	char ch;
	/* the ch is just the name of the variable, which will be used to create the listing in the for function
	 */
	for (ch ='a' ; ch <= 'z'; ch++)
	/* in a 'for loop, there is the start condition were I set ch to a, then say for loop to end when is less than or equal to z, and then for ch to increment
	 */
	{
		putchar(ch);
		/*prints one character to screen at a time for each loop
		 */
	}
	putchar('\n');
       return (0);	
}
