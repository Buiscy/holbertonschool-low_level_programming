#include <stdio.h>
/**
*generates greater, lesser or equal to zero and prints to terminal
*/

int main(void)
{
	/**
	*main function
	*/
	int bal;

		for (bal = '0'; bal <= '9'; bal++)
		{
			putchar(bal);
		}
	putchar('\n');
	return (0);
}
